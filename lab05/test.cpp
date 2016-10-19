#include <iostream>
using namespace std;

int main(){
    int sq;
    for (int i=0, sq=0; sq<100; i++,sq=i*i){
        cout << sq;
        cout << endl;
    }
    cout << "After the loop: " << sq << endl; 
    return 0;
} 
