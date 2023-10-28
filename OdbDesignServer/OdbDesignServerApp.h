#pragma once

#include "OdbDesignServer.h"
#include "App/OdbServerAppBase.h"


namespace Odb::App::Server
{
	class OdbDesignServerApp : public Odb::Lib::App::OdbServerAppBase
	{
	public:
		OdbDesignServerApp(int argc, char* argv[]);
		~OdbDesignServerApp();	
				
		//ExitCode Run() override;		

	protected:												
		void add_controllers() override;

	};
}
