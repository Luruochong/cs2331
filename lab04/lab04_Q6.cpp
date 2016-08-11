#include <iostream>
#include <iomanip>
using namespace std;

double power(double value, int pow){
    double result = 1;
    for (int i = 0; i < pow; i++)
        result = result * value;
    return result;
}

int main(){
    cout << setw(10) << "value" << "  power 2  " << "  power 3  " << "  power 4  " << "  power 5  " << endl;
    double value = 1.00;
    for (int j = 0; j < 9; j++){
        value = value + 0.10;
        for (int i = 1; i <= 5; i++){
            cout << setw(10) << fixed << setprecision(2) << power(value, i);
        }
        cout << endl;
    }
    return 0;
}
