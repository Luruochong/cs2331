/*Coins.cpp*/

#include <iostream>
#include "Coins.h"

using namespace std;

//Constructor
Coins::Coins(int d, int c)
{
	if (valid(d, c))
	{
		dollar = d; cent50 = c;
	}
    cout << "Constructor" << endl;
}

//Default Constructor
Coins::Coins()
{
	dollar = 0;
	cent50 = 0;
    cout << "Default Constructor" << endl;
}

//Input with validation
int Coins::input()
{
	int d, c;
	cin >> d >> c;
	if (valid(d,c))
	{
		dollar = d; cent50 = c;
	}
    return 0;
}

//Output coins contents
int Coins::output(void)
{
	cout << "(" << dollar << "," << cent50 << ")";
    return 0;
}

//Access functions
int Coins::get_dollar() { return dollar; }
int Coins::get_cent50() { return cent50; }

//Validation
bool Coins::valid(int d, int c)
{
	if (d<0 || c<0) 
		return false;
	return true;
}
