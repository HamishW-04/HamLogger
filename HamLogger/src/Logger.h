#pragma once
#include <iostream>

#include "Format.h"

#define String std::string

namespace HamLogger {
	class Logger {
	public:
		//Constructors
		Logger(int ID);
		~Logger();

		//Setters
		void SetFormat(Format newFormat);

		//Getters
		int GetID();
		String GetName();

		//Methods
		void Output();
	private:
		int id;
		String name;
		Format format;
	};
}

