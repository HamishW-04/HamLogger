#include "HamLogger.h"
#include <iostream>

namespace HamLogger {
	
	//Constructors/Destructors
	Logger::Logger(int ID) {
		Logger::id = ID;
	}

	Logger::~Logger() {
		std::cout << "Bye bye, logger " << id << std::endl;
	}

	//Setters
	void Logger::SetFormat(Format newFormat) {
		Logger::format = newFormat;
	}

	//Getters
	int Logger::GetID() {
		return id;
	}

	String Logger::GetName() {
		return name;
	}
}