#pragma once
#include <iostream>

namespace HamLogger {
	
	enum LogLevel {
		TRACE,
		INFO,
		WARN,
		ERROR
	};
	
	class Logger {
	public:
		//Constructors
		Logger();
		Logger(std::string name);
		~Logger();

		//Methods
		void Log(std::string message, LogLevel level);
	private:
		//Private Attributes
		std::string name;

		//Private Methods
		std::string LevelToString(LogLevel level);
	};
}

