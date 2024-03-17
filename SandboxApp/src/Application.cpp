#include "HamLogger.h"
#include <iostream>

int main() {

	HamLogger::Logger defaultLogger;
	HamLogger::Logger myLogger("Hamish's Logger!");
	defaultLogger.Log("Example Info.", HamLogger::LogLevel::INFO);
	myLogger.Log("This is my own logger!", HamLogger::LogLevel::TRACE);

	std::cin.get();
}