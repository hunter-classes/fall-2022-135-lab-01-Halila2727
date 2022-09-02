/*
	Author: Halil Akca
	Course: CSCI-135
	Instructor: Mike Zamansky
	Assignment: Lab 01, Task C

	This program will ask the user to input any valid year and will determine if it is a leap year.
*/
#include <iostream>
#include <algorithm>


std::string leap(int year)
{
	if(year%4 != 0)
	{
		return "COMMON YEAR";
	}
	else if(year%100 != 0)
	{
		return "LEAP YEAR";
	}
	else if(year%400 != 0)
	{
		return "COMMON YEAR";
	}
	else 
	{
		return "LEAP YEAR";
	}
}

int main()
{
	int userYear;

	std::cout << "Enter year: ";
	std::cin >> userYear;

	std::cout << leap(userYear);
	
	return 0;
}
