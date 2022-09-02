/*
	Author: Halil Akca
	Course: CSCI-135
	Instructor: Mike Zamansky
	Assignment: Lab 01, Task D
	
	This program will ask the user to input any valid yearand month, and will determine the number of days in that month.
*/

#include <iostream>

int leap(int year) //0=Common Year &&&&&&  1=Leap Year
{
	if(year%4 != 0)
	{
		return 0;
	}
	else if(year%100 != 0)
	{
		return 1;
	}
	else if(year%400 != 0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

int days_of_month(int input_year, int month)
{
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return 31;
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else
	{
		int leap_or_common = leap(input_year);
		if(leap_or_common == 0)
		{
			return 28;
		}
		else
		{
			return 29;
		}
	}
}

int main()
{
	int user_year, user_month;

	std::cout << "Enter year: ";
	std::cin >> user_year;

	std::cout << "Enter month: ";
	std::cin >> user_month;

	std::cout << days_of_month(user_year, user_month) << " days";
}
