/*
	Author: Halil Akca
	Course: CSCI-135
	Instructor: Mike Zamansky
	Assignment: Lab 01, Task A

	This program will ask the user to input 2 integer numbers and print out the smaller of the two
*/
#include <iostream>

int smaller(int a, int b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int firstNum=0;

	int secondNum=0;

	std::cout << "Enter the first number: ";
	std::cin >> firstNum;

	std::cout << "Enter the second number: ";
	std::cin >> secondNum;

	std::cout << "The smaller of the two is " << smaller(firstNum, secondNum) << ".";
	return 0;
}
