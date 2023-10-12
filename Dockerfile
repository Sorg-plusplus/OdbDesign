#FROM debian:bookworm-20230522-slim AS build
FROM debian:bookworm-20230522-slim AS build

# install dependencies
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        gpg \
        curl \
        apt-transport-https \
        build-essential \
        ca-certificates \
        cmake \            
        g++ \
        ninja-build \
        python3-dev \   
        # mingw-w64 \        
        swig \
        build-essential \
        git \
        cmake \
        zip \
        unzip \
        tar  && \
    rm -rf /var/lib/apt/lists/* 

# install vcpkg
# /root/src/github/microsoft/vcpkg/scripts/buildsystems/vcpkg.cmake
WORKDIR /root/src/github/microsoft
RUN git clone https://github.com/Microsoft/vcpkg.git
WORKDIR /root/src/github/microsoft/vcpkg
RUN ./bootstrap-vcpkg.sh

# copy source
COPY . /src/OdbDesign
WORKDIR /src/OdbDesign

# generate SWIG python bindings
RUN chmod +x scripts/generate-python-module.sh
RUN ./scripts/generate-python-module.sh

# configure & build using presets
# linux-release
RUN cmake --preset python-linux-release
RUN cmake --build --preset python-linux-release

# much smaller runtime image
#FROM python:3.11.4-bullseye AS run
FROM debian:bookworm-20230522-slim as run

# copy PyPyPyOdbDesignServer files
COPY --from=build /src/OdbDesign/PyOdbDesignServer PyOdbDesignServer

# copy PyOdbDesignLib files
COPY --from=build /src/OdbDesign/out/build/python-linux-release/OdbDesignLib/_PyOdbDesignLib.so /PyOdbDesignServer/PyOdbDesignLib/
COPY --from=build /src/OdbDesign/PyOdbDesignLib/PyOdbDesignLib.py /PyOdbDesignServer/PyOdbDesignLib/
RUN touch /PyOdbDesignServer/PyOdbDesignLib/__init__.py

RUN apt-get update && \
    apt-get install -y --no-install-recommends \       
        python3-dev \
        python3-pip

RUN python3 -m pip install -r /PyOdbDesignServer/requirements.txt --break-system-packages

# run
WORKDIR /PyOdbDesignServer
EXPOSE 8000
CMD ["gunicorn", "--bind", ":8000", "--workers", "3", "PyOdbDesignServer.wsgi:application"]
