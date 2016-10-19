/*Date.cpp*/

#include <iostream>
#include "date.h"

using namespace std;

//The input() member function
int Date::input()
{
	cout << "Enter year, month and day as numbers: ";
	cin >> year >> month >> day;	
    return 0;
}

//The output() member function
int Date::output()
{
	cout << "year = " << year
		 << ", month = " << month
		 << ", day = " << day << endl;
    return 0;
}

