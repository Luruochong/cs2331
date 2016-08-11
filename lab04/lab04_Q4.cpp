#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "This is a 9 X 9 multiplication table" << endl;
    for (int j = 0; j < 9; j++){
        for (int i = 0; i < 9; i++){
            cout << setw(3) << (i + 1) * (j + 1);
        }
        cout << endl;
    }
    return 0;
}
