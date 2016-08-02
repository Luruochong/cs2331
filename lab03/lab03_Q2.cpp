#include <iostream>
using namespace std;

int isLeapYear(int year){
    if (year % 4 == 0){
        cout << year << " is a leap year." << endl;
    }
    else 
        cout << year << " is a common year." << endl;

    return 0;
}

int main(){
    int year;
    char conti;
    while (conti != 'n'){
        cout << "Input a year: ";
        cin >> year;
        isLeapYear(year);
        cout << "Continue? Your choice[y/n]: ";
        cin >> conti;
    }
    return 0;
}
