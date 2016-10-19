/*Coins.h*/

#ifndef COINS_H
#define COINS_H

//The Coins class
class Coins
{
public:

	//Constructors
	Coins(int d, int c);
	Coins();
	
	//I-O
	int input();
	int output();

	//Access functions
	int get_dollar();
	int get_cent50();
	
private:
	//Validation
	bool valid(int d, int c);

	int dollar; //count of $1 coins
	int cent50; //count of $0.5 coins
};

#endif
