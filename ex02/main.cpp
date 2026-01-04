#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	// Test 1: Construction with no parameter
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;
	
	// Test 2: Construction with unsigned int
	Array<int> numbers(MAX_VAL);
	std::cout << "Numbers array size: " << numbers.size() << std::endl;
	
	// Fill with values
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = i;
	}
	
	// Test 3: Copy constructor
	Array<int> copy(numbers);
	std::cout << "Copy array size: " << copy.size() << std::endl;
	
	// Modify original, ensure copy is not affected
	numbers[0] = 999;
	std::cout << "Original[0]:  " << numbers[0] << ", Copy[0]: " << copy[0] << std::endl;
	
	// Test 4: Assignment operator
	Array<int> assigned;
	assigned = numbers;
	std::cout << "Assigned array size: " << assigned.size() << std::endl;
	
	// Modify assigned, ensure original is not affected
	assigned[1] = 888;
	std::cout << "Original[1]: " << numbers[1] << ", Assigned[1]: " << assigned[1] << std::endl;
	
	// Test 5: Out of bounds exception
	try
	{
		numbers[MAX_VAL] = 0;
		std::cout << "ERROR: Should have thrown exception!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Correctly caught out of bounds exception" << std::endl;
	}
	
	// Test 6: Negative index (wraps to large unsigned)
	try
	{
		numbers[-1] = 0;
		std::cout << "ERROR: Should have thrown exception!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std:: cout << "Correctly caught negative index exception" << std::endl;
	}
	
	// Test with strings
	Array<std::string> strings(3);
	strings[0] = "Hello";
	strings[1] = "World";
	strings[2] = "! ";
	
	std::cout << "String array:  ";
	for (unsigned int i = 0; i < strings.size(); i++)
		std::cout << strings[i] << " ";
	std::cout << std::endl;
	
	return 0;
}
