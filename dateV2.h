/*Date.h*/

#ifndef DATE_H
#define DATE_H

//The Date class

class Date
{
public:

	//I-O
	int input();
	int output();

	//Access functions
	int set(int new_y, int new_m, int new_d);
	int get_year();
	int get_month();
	int get_day();

private:
	
	// check if y,m,d valid
	bool valid(int y, int m, int d); 
	
	//check if y is a leap year
	bool isLeapYear(int y);

	//date data
	int year;
	int month;
	int day;
};

#endif
