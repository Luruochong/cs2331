/*You must make use of isHexDigit and hex2dec.
The main function must be short: ~ 25 lines. */

#include <iostream>
using namespace std;

bool isHex(char hex){
    if (hex >= '0' && hex <= '9') return true;
    else if (hex >= 'A' && hex <= 'F') return true;
    else return false;
}

bool isHexDigit(char hex1, char hex2){
    if (isHex(hex1) && isHex(hex2)) return true;
    else return false;
}

int hex2dec(char hex){
    if (hex >= '0' && hex <= '9'){
        return hex - '0';
    }
    else 
        return 10 + hex - 'A';
}

int main(){
    char hex1, hex2;
    cout << "Input a 2-digit hexadecimal number: ";
    cin >> hex1 >> hex2;
    if (isHexDigit(hex1, hex2))
        cout << "You entered: " << hex1 << hex2 << endl << "First digit: " << hex1 << " means " << hex2dec(hex1) << endl << "Second digit: " << hex2 << " means " << hex2dec(hex2) << endl << "In decimal, it is: " << hex2dec(hex1) * 16 + hex2dec(hex2) << endl;
    else cout << "Invalid number.";
    return 0;
}


