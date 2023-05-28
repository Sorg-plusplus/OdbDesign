#pragma once

#include <string>
#include <map>
#include <memory>
#include <filesystem>

#include "LayerDirectory.h"
#include "EdaDataFile.h"
#include "NetlistFile.h"

namespace Odb::Lib::FileModel::Design
{
	class DECLSPEC StepDirectory
	{
	public:
		StepDirectory(std::filesystem::path path);
		~StepDirectory();

		std::string GetName();
		std::filesystem::path GetPath();

		const EdaDataFile& GetEdaData() const;
		const LayerDirectory::StringMap& GetLayersByName() const;
		const NetlistFile::StringMap& GetNetlistsByName() const;

		bool Parse();

		typedef std::map<std::string, std::shared_ptr<StepDirectory>> StringMap;

	private:
		std::string m_name;
		std::filesystem::path m_path;

		LayerDirectory::StringMap m_layersByName;
		NetlistFile::StringMap m_netlistsByName;
		EdaDataFile m_edaData;

		bool ParseLayerFiles(std::filesystem::path layersPath);
		bool ParseNetlistFiles(std::filesystem::path netlistsPath);
		bool ParseEdaDataFiles(std::filesystem::path edaPath);

	};
}

