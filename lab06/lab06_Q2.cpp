#include <iostream>
using namespace std;

const int MAX_ARR_SIZE = 50;

int input_into_arr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    return 0;
}

int show_First_Last_and_Middle(const int arr[],int n){
    cout << "The first number is: " << arr[0] << endl;
    cout << "The last number is; " << arr[n - 1] << endl;
    if (n % 2 == 0)
        cout << "The middle number is: " << arr[n / 2 - 1] << " and " << arr[n / 2] << endl;
    else
        cout << "The middle number is: " << arr[(n + 1) / 2 - 1] << endl;
    return 0;
}

bool hasDivisibleBy3(const int arr[],int n){
    bool has_div = false;
    for (int i = 0; i < n; i++){
        if (arr[i] % 3 == 0)
            has_div = true;
    }
    return has_div; 
}

int countOddAndEven(const int arr[], int n, int &cntOdd, int &cntEven){
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0)
            cntEven++;
        else
            cntOdd++;
    }
    return 0;
}

int diff_large_small(const int arr[],int n){
    int largest = arr[0];
    int smallest = arr[0];   
    for (int i = 0; i < n; i++){
        if (largest < arr[i])
            largest = arr[i];
        else if (smallest > arr[i])
            smallest = arr[i];
    }
    return largest - smallest;
}

int stat_RightMostDigits(const int arr[],int n){
    int d[10] = {0};
    for (int i = 0; i < n; i++){
        int Rightmostdigit = arr[i] % 10;
        d[Rightmostdigit]++;
    }
    for (int j = 0; j < 10; j++){
        cout << "There are " << d[j] << " numbers ended with " << j <<endl;
    }
    return 0;
}

int main(){
    int arr[MAX_ARR_SIZE],n;
    int cntOdd = 0;
    int cntEven = 0;
    cout << "Input n (1.." << MAX_ARR_SIZE << "): ";
    cin  >> n;
    cout << "Input " << n << " postive numbers: ";
    input_into_arr(arr,n);
    cout << endl;
    cout << "(A) ";
	show_First_Last_and_Middle(arr,n);
    cout << endl;
    cout << "(B) ";
	if (hasDivisibleBy3(arr,n))
		cout << "Some number(s) are divisible by 3." << endl;
	else
		cout << "None of them is divisible by 3." << endl;
    cout << endl;
    cout << "(C) ";
	countOddAndEven(arr,n,cntOdd,cntEven);
	cout << "There are " << cntOdd << " odd numbers and " << cntEven << " even numbers" << endl<< endl;
	cout << "(D) The difference between the largest and smallest numbers is: " << diff_large_small(arr,n) << endl;
    cout << endl;
    cout << "(E) Rightmost-Digit-Statistics\n";
	stat_RightMostDigits(arr,n);
    return 0;
}
