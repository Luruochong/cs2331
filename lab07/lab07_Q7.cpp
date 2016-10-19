#include <iostream>
#include <fstream>
using namespace std;

const int ARR_SIZE=100;

int display_arr_items(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

int sort(int arr[], int n){
    int temp;
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            if (arr[i] > arr[i + 1]){
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp; 
            }
        }
    }
    return 0;
}

int data_from_files(int lists[][ARR_SIZE], int count[]){
    ifstream f1;
    char pathname[200];
    cout << "Type the pathename of the input file: ";
    cin >> pathname;
    f1.open(pathname);
    for (int i = 0; i < 2; i++){
        int a;
        count[i] = 0;
        f1 >> a;
        while (a != -1){
            lists[i][count[i]] = a;
            f1 >> a;
            count[i]++;
        }
    }
    f1.close();
    return 0;
}

int Difference(int a[], int n1, int b[], int n2){
    int i = 0;
    int j = 0;
    int ndifferent = 0;
    while (i < n1 && j < n2){
        if (a[i] < b[j]){
            cout << a[i] << " is found in the first list only." << endl;
            ndifferent++;
            i++;
        }
        else if(a[i] == b[j]){
            i++;
            j++;
        }
        else{
            cout << b[j] << " is found in the second list only." << endl;
            ndifferent++;
            j++;
        }
    }
    if (i < n1){
        for (i; i < n1; i++){
            cout << a[i] << " is found in the first list only." << endl;
            ndifferent++;
        }
    }
    else if (j < n2){
        for (j; j < n2; j++){
            cout << b[j] << " is found in the second list only." << endl;
            ndifferent++;
        }
    }
    return ndifferent;
}

int main(){
	int lists[2][ARR_SIZE];		
	int n[2];		
	int nDifferent;		
    
	data_from_files(lists, n);
    sort(lists[0], n[0]);
    sort(lists[1], n[1]);
	cout << "After sorting, the first list contains: \n";
	display_arr_items(lists[0],n[0]);
	cout << endl<<endl;

	cout << "After sorting, the second list contains: \n";
	display_arr_items(lists[1],n[1]);
	cout << endl<<endl;

	cout << "Comparison of the lists: \n";
	nDifferent=Difference(lists[0], n[0], lists[1], n[1]);

	if (nDifferent==0)
		cout << "They contain the same data.\n\n";
	else
		cout << nDifferent << " values are different.\n\n";
    return 0;
}

