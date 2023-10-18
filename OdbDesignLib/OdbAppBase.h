#pragma once

#include "IOdbServerApp.h"
#include "DesignCache.h"
#include "OdbDesignArgs.h"
#include "odbdesign_export.h"

using namespace Utils;

namespace Odb::Lib
{
	class ODBDESIGN_EXPORT OdbAppBase : public virtual IOdbApp
	{
	public:
		OdbAppBase(int argc, char* argv[]);
		virtual ~OdbAppBase();

		const OdbDesignArgs& args() const override;
		DesignCache& design_cache() override;

		virtual Utils::ExitCode Run() override;

	protected:
		DesignCache m_designCache;		
		const OdbDesignArgs m_commandLineArgs;

	};
}
