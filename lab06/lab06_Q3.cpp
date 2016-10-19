#include <iostream>
using namespace std;

const int MAX_ARR_SIZE = 100;

int input_into_arr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];    
    }
    return 0;
}

int listElements(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}

int listReversed(int arr[], int n){
    for (int i = n - 1; i >= 0; i--){
        cout << arr[i] << " ";    
    }
    return 0;
}

bool areSortedAscending(int arr[], int n){
    bool Sorted = true;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr [i + 1])
            Sorted = false;
    }
    return Sorted;
}

int removeMiddle(int arr[], int &n){
    if (n % 2 == 0){
        for (int i = n / 2 - 1; i < n - 2; i++){
            arr[i] = arr[i + 2];
        }
        n = n - 2;
    }
    else{
        for (int i = n / 2; i < n - 1; i++){
            arr[i] = arr[i + 1];
        }
        n = n - 1;
    }
    return 0;
}

int duplicateAtTheEnd(int arr[], int &n){
    for (int i = 0; i < n; i++){
        arr[n + i] = arr[i];
    }
    n = n * 2;
    return 0;
}

int main(){   
	int arr[MAX_ARR_SIZE],n;	
	cout << "Input n (1.." << MAX_ARR_SIZE/2 << "): ";
	cin >> n;
	cout << "Input " << n << " positive numbers: ";
	input_into_arr(arr,n);
	cout << endl;
	cout << "(A) Reversed listing\n";
	listReversed(arr,n);
	cout << endl << endl;
	cout << "(B) Checking for sorted order\n";
	cout << "Result: ";
	if (areSortedAscending(arr,n))
		cout << "They are sorted in ascending order";
	else
		cout << "They are not sorted in ascending order";
	cout << endl << endl;
	cout << "(C) Remove middle element(s)\n";
	removeMiddle(arr,n);
	listElements(arr,n);
	cout << endl << endl;
	cout << "(D) Extend by duplicating all contents at the end\n";
	duplicateAtTheEnd(arr,n);
	listElements(arr,n);
	cout << endl << endl;
    return 0;
}
