#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream inFile;	
	int n;
	int sum=0;
	char inFile_pathname[200]; 	
	cout << "Type the file pathname for input: ";
	cin >> inFile_pathname;
    inFile.open(inFile_pathname);
    inFile >> n;

	for (int i=0;i<n;i++){
	    int value;
        inFile >> value;
        sum += value;
	}

	cout << "The sum of the values is: " << sum << endl;
    inFile.close();
    return 0;
} 
