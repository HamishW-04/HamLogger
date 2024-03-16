#pragma once

#include "Logger.h";
#include "Format.h"

namespace HamLogger{

	Logger* NewLogger(int ID);

	Format NewFormat();

	void ExamplePrint();
}