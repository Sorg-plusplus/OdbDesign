#include "StepsEdaDataController.h"
#include "FileModel/Design/FileArchive.h"
#include "FileModel/Design/EdaDataFile.h"
#include "JsonCrowReturnable.h"
#include <sstream>

using namespace Odb::Lib;
using namespace Odb::Lib::FileModel::Design;
using namespace Utils;

namespace Odb::App::Server
{
	StepsEdaDataController::StepsEdaDataController(IOdbServerApp& serverApp)
		: RouteController(serverApp)
	{
	}

	void StepsEdaDataController::register_routes()
	{
		//
		//	/steps/edadata?design=sample_design&step=stepName
		//		
		// TODO: figure out why capture here is weird (i.e. how to capture pServerApp so it can be used in the member fxn handler)
		CROW_ROUTE(m_serverApp.crow_app(), "/designs/<string>/steps/<string>/eda_data")
			([&](const crow::request& req, std::string designName, std::string stepName)
				{
					return this->steps_edadata_route_handler(designName, stepName, req);
				});

		//app.route_dynamic(url)

		//register_route_handler("/steps/edadata/package_records", std::bind(&StepsEdaDataController::steps_edadata_route_handler, this, std::placeholders::_1));			
		/*[&](const crow::request& req)
		{
			return steps_edadata_route_handler(req);
		});*/
	}	

	crow::response StepsEdaDataController::steps_edadata_route_handler(const std::string& designName, 
																	   const std::string& stepName,
																	   const crow::request& req)
	{
		if (designName.empty())
		{
			return crow::response(crow::status::BAD_REQUEST, "design name not specified");
		}

		if (stepName.empty())
		{
			return crow::response(crow::status::BAD_REQUEST, "step name not specified");
		}

		auto pFileArchive = m_serverApp.designs().GetFileArchive(designName);
		if (pFileArchive == nullptr)
		{
			std::stringstream ss;
			ss << "design: \"" << designName << "\" not found";			
			return crow::response(crow::status::NOT_FOUND, ss.str());
		}

		auto& stepsByName = pFileArchive->GetStepsByName();
		auto findIt = stepsByName.find(stepName);
		if (findIt == stepsByName.end())
		{
			std::stringstream ss;
			ss << "(design: \"" << designName << "\")" << " step: \"" << stepName << "\" not found";
			return crow::response(crow::status::NOT_FOUND, ss.str());
		}

		auto& step = findIt->second;
		auto& edaDataFile = step->GetEdaDataFile();
		return crow::response(JsonCrowReturnable(edaDataFile));
	}
}
