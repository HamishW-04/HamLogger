#include "HamLogger.h"
#include <iostream>

namespace HamLogger {
	
	//Constructors/Destructors
	Logger::Logger() {
		name = "Default";
	}

	Logger::Logger(std::string name) {
		Logger::name = name;
	}

	Logger::~Logger() {
		std::cout << "Bye bye, logger" << std::endl;
	}

	std::string Logger::LevelToString(LogLevel level) {
		switch (level) {
		case LogLevel::TRACE: return "TRACE";
		case LogLevel::INFO: return "INFO";
		case LogLevel::WARN: return "WARN";
		case LogLevel::ERROR: return "ERROR";
		}
	}

	void Logger::Log(std::string message, LogLevel level) {
		std::cout << LevelToString(level) << " | " << name << " | " << message << std::endl;
	}
}