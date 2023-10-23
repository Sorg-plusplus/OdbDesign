#include "OdbServerAppBase.h"
#include "Logger.h"

using namespace Utils;

namespace Odb::Lib
{
    OdbAppBase::OdbAppBase(int argc, char* argv[])
        : m_designCache("designs")
        , m_commandLineArgs(argc, argv)
    {        
        GOOGLE_PROTOBUF_VERIFY_VERSION;
    }

    OdbAppBase::~OdbAppBase()
    {   
        Logger::instance()->stop();
        google::protobuf::ShutdownProtobufLibrary();
    }

    const OdbDesignArgs& OdbAppBase::args() const
    {
        return m_commandLineArgs;
    }

    DesignCache& OdbAppBase::designs()
    {
        return m_designCache;
    }

    Utils::ExitCode OdbAppBase::Run()
    {                
        Logger::instance()->logLevel(Logger::Level::Info);
        Logger::instance()->start();

        return Utils::ExitCode::Success;
    }   
}