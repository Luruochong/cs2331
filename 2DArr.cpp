#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "2DArr.h"

using namespace std;

// put random values in a 2D array
int setRandomContents(int arr[][Arr2D_Width])
{
	for (int i=0;i<Arr2D_Height;i++)
		for (int j=0;j<Arr2D_Width;j++)
			arr[i][j]=rand()%20; // a random number from 0 to 19 (We will learn random numbers later.)
    return 0;
}

// display contents in a 2D array
int displayArr2D(const int arr[][Arr2D_Width])
{
	for (int i=0;i<Arr2D_Height;i++)
	{
		for (int j=0;j<Arr2D_Width;j++)
			cout << setw(3) << arr[i][j];
		cout << endl;
	}
    return 0;
}

// Copy contents from a 2D array to a 2D array
int copyFrom2DTo1D(const int arr2D[][Arr2D_Width], int arr1D[])
{
	int idx1D=0;
	for (int i=0;i<Arr2D_Height;i++)
	{
		for (int j=0;j<Arr2D_Width;j++)
		{	
			arr1D[idx1D]=arr2D[i][j];
			idx1D++;
		}
	}
    return 0;
}
