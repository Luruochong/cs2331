#include <iostream> 
using namespace std; 

int main(){
    char c;
    do {
        cin >> c;
        if (c > 96 && c < 123)
            c = c - 32;
        cout << c;
        
    } while (c != '!');
    cout << endl;
    return 0;
}
