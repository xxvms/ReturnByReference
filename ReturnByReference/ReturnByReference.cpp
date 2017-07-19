// ReturnByReference.cpp : Defines the entry point for the console application.
//

#include <iostream>

void GetSquare(int& number)
{
	number *= number;
}


int main()
{
	std::cout << "Enter number: ";
	int number;
	std::cin >> number;
	GetSquare(number);

	std::cout << "Square of number entered is: " << number << std::endl;

    return 0;
}

