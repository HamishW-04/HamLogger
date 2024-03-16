#include "HamLogger.h"
#include <iostream>

int main() {

	HamLogger::Logger* logger = nullptr;
	logger = HamLogger::NewLogger(2);
	HamLogger::ExamplePrint();
	std::cout << logger->GetID() << std::endl;

	delete logger;
	std::cin.get();
}