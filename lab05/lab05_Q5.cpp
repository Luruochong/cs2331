#include <iostream>
using namespace std;

int main(){
    int rows, columns, cell;
    cout << "Input number of rows: ";
    cin >> rows;
    cout << "Input number of columns: ";
    cin >> columns;
    cout << "Input the size of each square cell: ";
    cin >> cell;
    for (int  i = 0; i < rows; i++){
        for (int j = 0; j < ((cell + 1) * columns + 1); j++){
            cout << "* ";
        }
        cout << endl;
        for (int m = 0; m < cell; m++){
            for (int k = 0; k < columns + 1; k++){
                cout << "*";
                for (int l = 0; l < 2 * cell + 1; l++){
                    cout << " ";            
                }
            }
            cout << endl;
        }
    }
    for (int j = 0; j < ((cell + 1) * columns + 1); j++){
        cout << "* ";
    }
    return 0;
}
