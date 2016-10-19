#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

const int Arr2D_Width=5;
const int Arr2D_Height=3;

int setRandomContents(int arr[][Arr2D_Width]){
	for (int i=0;i<Arr2D_Height;i++)
		for (int j=0;j<Arr2D_Width;j++)
			arr[i][j]=rand()%20; 
    return 0;
}

int displayArr2D(const int arr[][Arr2D_Width]){
	for (int i = 0; i < Arr2D_Height; i++){
        for (int j = 0; j < Arr2D_Width; j++){
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

int copyFrom2DTo1D(const int arr2D[][Arr2D_Width], int arr1D[]){
    for (int i = 0; i < Arr2D_Height; i++){
        for (int j = 0 ; j < Arr2D_Width; j++){
            arr1D[i * Arr2D_Width + j] = arr2D[i][j];
        }
    }
    return 0;
}

int main(){
	int arr2D[Arr2D_Height][Arr2D_Width];		
	int arr1D[Arr2D_Height*Arr2D_Width];		
	setRandomContents(arr2D);		
	cout << "Original Contents:\n";
	displayArr2D(arr2D);			
	cout << endl;
	copyFrom2DTo1D(arr2D,arr1D);	
	cout << "Resultant contents in the 1D array:\n";
	for (int i=0;i<Arr2D_Height*Arr2D_Width;i++)
		cout << arr1D[i] << " ";
	cout << endl << endl;
    return 0;
}
