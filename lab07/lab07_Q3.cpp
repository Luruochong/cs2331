#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream inFile;
	ofstream outFile;
	char inFile_pathname[200]; 
	char outFile_pathname[200]; 
	cout << "Type the file pathname for input: ";
	cin >> inFile_pathname;	
	cout << "Type the file pathname for output: ";
	cin >> outFile_pathname;
    inFile.open(inFile_pathname);
	if (inFile.fail()){	
		cout << "Can't open input file.\n";
        exit(1);
	}
    outFile.open(outFile_pathname);
	if (outFile.fail()){
		cout << "Can't open output file.\n";
        exit(2);
	}
    while (!inFile.eof()){
        int x1, x2;
        inFile >> x1 >> x2;
        if (!inFile.fail()){
            outFile << x1 + x2 << endl;
            if (outFile.fail()){
                cout << "Can't output result to output file.\n";
                exit(3);
            }
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}
