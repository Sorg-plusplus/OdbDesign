#pragma once

#include "WorkQueueLoopThread.h"
#include <chrono>
#include "utils_export.h"


namespace Utils
{
	enum class LogLevel
	{
		None,
		Error,
		Warning,
		Info,
		Debug,
	};

	struct LogMessage
	{
		std::string message;		
		LogLevel level;
		std::chrono::time_point<std::chrono::system_clock> timeStamp;
		std::string file;
		int line;

		LogMessage(std::string message, LogLevel level, std::string file, int line)
			: message(message), level(level), timeStamp(std::chrono::system_clock::now()), file(file), line(line)
		{
		}
	};	

	class UTILS_EXPORT Logger : public WorkQueueLoopThread<struct LogMessage>
	{
	public:
		Logger();

		LogLevel GetLogLevel() const;
		void SetLogLevel(LogLevel level);

		void Log(LogLevel level, const std::string& message, const std::string& file = "", int line = -1);

	private:
		LogLevel m_level;

		bool processWorkItem(struct LogMessage& logMessage) override;
		std::string formatLogMessage(const struct LogMessage& logMessage);

		std::string logLevelToString(LogLevel level) const;

		const std::string LogLevelStrings[5] = { "None", "Error", "Warning", "Info", "Debug" };

	};
}
