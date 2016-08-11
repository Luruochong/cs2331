#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2;
    cin >> n;
    do {
        if (n % i == 0 && n / i != 1)
            cout << i << " ";
        i++;
    } while (i < n);
    cout << endl;
    return 0;
}
