#include <iostream>
using namespace std;

int main(){
    int year;
    char conti;
    while (conti != 'n'){
        cout << "Input a year: ";
        cin >> year;
        if (year % 4 == 0){
            cout << year << " is a leap year." << endl;
        }
        else 
            cout << year << " is a common year." << endl;
        cout << "Continue? Your choice[y/n]: ";
        cin >> conti;
    }
    return 0;
}
