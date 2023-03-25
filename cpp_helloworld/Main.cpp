#include <iostream>
#include "Log.h"

void Log(int number)
{
	std::cout << number << std::endl;
}

void Increment(int* value)
{
	(*value)++;
}

int main()
{
	int var = 8;
	Increment(&var);

	Log(var);

	std::cin.get();
}