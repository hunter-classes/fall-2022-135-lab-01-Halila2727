/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 01, Task B

        This program will ask the user to input 3 integer numbers and print out the smaller of the 3.>*/
#include <iostream>

int smaller3(int a, int b, int c)
{
	if(a < b && a < c)
	{
		return a;
	}
	else if(b < a && b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main()
{
	int firstNum=0;
	int secondNum=0;
	int thirdNum=0;

	std::cout << "Enter the first number: ";
	std::cin >> firstNum;

	std::cout << "Enter the second number: ";
	std::cin >> secondNum;

	std::cout << "Enter the third number: ";
	std::cin >> thirdNum;

	std::cout << "The smaller of the three is " << smaller3(firstNum, secondNum, thirdNum) << ".";
	return 0;
}
