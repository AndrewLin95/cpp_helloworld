#include <iostream>
#include "Log.h"

void Log(int number)
{
	std::cout << number << std::endl;
}

int main()
{
	int var = 8;
	// set ptr to reference the memory address of var
	int* ptr = &var;
	// update the memory address to new value
	*ptr = 10;

	Log(var);
	std::cout << ptr << std::endl;

	std::cin.get();
}