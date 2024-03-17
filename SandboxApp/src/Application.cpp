#include "HamLogger.h"
#include <iostream>

int main() {

	HamLogger::Logger logger;
	logger.Log("Example Info.", HamLogger::LogLevel::INFO);
	HamLogger::ExamplePrint();

	std::cin.get();
}