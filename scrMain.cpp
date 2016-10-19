/*srcMain.cpp*/

#include <iostream>
#include "Coins.h"

using namespace std;

int main()
{
	Coins wallet;
    Coins wallet2(10,20);
    //Coins wallet3(10);

	cout << "Input amounts of $1 and $0.5 coins: ";
	wallet.input();

	cout << "The wallet has: "; 
	wallet.output();
	cout << endl;
    
    cout << "The wallet2 has: "; 
    wallet2.output();
    cout << endl;
    return 0;
}
