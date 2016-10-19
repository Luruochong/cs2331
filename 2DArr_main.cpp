// Copy contents from a 2D array to a 1D array

#include <iostream>
#include "2DArr.h"

using namespace std;

int main()
{

	int arr2D[Arr2D_Height][Arr2D_Width];	// 2D
	int arr1D[Arr2D_Height*Arr2D_Width];	// 1D

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
