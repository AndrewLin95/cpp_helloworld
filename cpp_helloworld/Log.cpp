#include <iostream>

void InitLog()
{
	Log("Initilizing Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}