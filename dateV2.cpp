/*Date.cpp*/

#include <iostream>
#include "dateV2.h"

using namespace std;

//Input date with validation
int Date::input()
{
	int y, m, d; // local variables for user's input

	do 
	{
		cout << "Enter year, month and day as numbers: ";
		cin >> y >> m >> d;	
	} while (!valid(y,m,d)); 

	year = y;
	month = m; // update private members
	day = d;
    return 0;	
}

//Output date
int Date::output()
{
	cout << "year = " << year
		 << ", month = " << month
		 << ", day = " << day << endl;
    return 0;
}

// Set the private members according to new values
int Date::set(int new_y, int new_m, int new_d)
{
	if (valid(new_y, new_m, new_d)) 
	{
		 year = new_y;
		 month = new_m;
		 day = new_d;
	}
    return 0;
}

// Accessor functions
int Date::get_year() { return year; }
int Date::get_month() {	return month; }
int Date::get_day() { return day; }

// check if y is a leap year
bool Date::isLeapYear(int y)
{
	if (y%400==0)
		return true;
	else if (y%100==0)
		return false;
	else if (y%4==0)
		return true;
	else
		return false;
}

// check if y,m,d valid
bool Date::valid(int y, int m, int d)
{
	if (m<1 || m>12 || d<1) return false;
	switch(m){
		case 1: case 3: case 5: case 7:
		case 8: case 10: case 12:
				 return d<=31; 
		case 4: case 6: case 9: case 11:
				 return d<=30; 
		case 2:
				 if (isLeapYear(y))
					 return d<=29; 
				 else
					 return d<=28; 
	}
	return false;
}
