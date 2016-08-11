#include <iostream>
using namespace std;  
int main(){
    int base_size, i, row;
    cout << "Input the base size of the triangle: ";
    cin >> base_size;  
    for (i = 0; i < base_size-1; i++)
        cout << ' ';

    cout << '*' << endl;

    for (row = 2; row <= base_size-1; row++){
        for (i = 0; i < base_size-row; i++)
            cout << ' ';
        cout << '*';       
        for (i = 0; i < (row * 2 - 3); i++)
            cout << ' ';
        cout << '*';
    cout << endl;
    }
    for (i = 0; i < base_size; i++)
        cout << "* ";
    cout << endl;
    return 0;
}
