#include <fstream>
#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
    ifstream in_file;
    int x;

    in_file.open("infile.txt");

    while (!in_file.eof()){
        in_file >> x;
        //if (!in_file.fail())
            cout << x << endl;
    }
    in_file.close();
    return 0;
} 
