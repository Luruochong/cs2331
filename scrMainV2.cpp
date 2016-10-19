/*srcMain.cpp*/

#include <iostream>
#include "dateV2.h"
using namespace std;

int main()
{	
	Date d;
    Date today;

	d.input();

	cout << "You typed: ";
	d.output();

	cout << endl;
	cout << "The year, " << d.get_year() << ", will be changed ..\n";
	d.set(2011,d.get_month(),d.get_day());
	cout << "The year is now " << d.get_year() << ".\n\n";
    
    today.set(2009, 1, 1);
    if (today.valid(2010,1,1));
    today.month = 13;
    return 0;
}
