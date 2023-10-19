#include "OdbDesignServerApp.h"
#include "OdbDesign.h"
#include "Controllers/HelloWorldController.h"
#include "Controllers/StepsEdaDataController.h"


namespace Odb::App::Server
{
	OdbDesignServerApp::OdbDesignServerApp(int argc, char* argv[])
		: OdbServerAppBase(argc, argv)
	{		
	}

	OdbDesignServerApp::~OdbDesignServerApp()
	{					
	}

	//Utils::ExitCode OdbDesignServerApp::Run()
	//{
	//	//
	//	// do any initialization here
	//	//

	//	return OdbServerAppBase::Run();

	//	//
	//	// do any cleanup here
	//	//
	//}

	void OdbDesignServerApp::add_controllers()
	{
		m_vecControllers.push_back(std::make_shared<HelloWorldController>(*this));
		m_vecControllers.push_back(std::make_shared<StepsEdaDataController>(*this));
	}	
}