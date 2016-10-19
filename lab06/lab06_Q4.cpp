#include <iostream>
using namespace std;

int digits_of_n(int n){
    int cntdigits = 1;
    int a = n;
    do {
        cntdigits++;
        a /= 10;
    } while (a > 10);
    return cntdigits;
}

int main(){
    int n;
    int i;
    int m = n;
    cout << "Input n: ";
    cin >> n;
    int cntdigits = digits_of_n(n);
    cout << "The digits are: ";
    for (i = cntdigits - 1; i >= 0; i--){
        for (int j = 0; j < i; j++){
            m /= 10;
        } 
        cout << m % 10;
        if (i > 0)
            cout << ", ";
        else
            cout << ".";
        m = n;
    }
    cout << endl;
    return 0;
}
