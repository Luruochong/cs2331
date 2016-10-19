#include <iostream>
using namespace std;

int display(const int A[], int size){
	int i;
	for (i=0; i<size; i++)
		cout << A[i] << " ";
    return 0;
}

int merged_list(int L1[], int L2[], int M[], int n){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < n){
        if (L1[i] < L2[j]){
            M[k] = L1[i];
            i++;
            k++;
        }
        else{
            M[k] = L2[j];
            j++;
            k++;
        }
    }
    if (i < n){
        for (i; i < n; i++){
            M[k] = L1[i];
            k++;
        }
    }
    else if (j < n){
        for (j; j < n; j++){
            M[k] = L2[j];
            k++;
        }
    }
    return 0;
}

int main(){
	const int LIST_SIZE=6;
    int mergedlist[LIST_SIZE * 2];
	int twoLists[2][LIST_SIZE] =
	{	
		{2, 3, 6, 8, 9, 12},
		{5, 7, 8, 11, 13, 19}
	};

    merged_list(twoLists[0], twoLists[1], mergedlist, LIST_SIZE);
	cout << "1st list: "; 
	display(twoLists[0],LIST_SIZE);
	cout << endl;
   
	cout << "2nd list: ";
	display(twoLists[1],LIST_SIZE);
	cout << endl;  
    cout << "The merged list: ";
    display(mergedlist, LIST_SIZE * 2);
    cout << endl;
    return 0;
}
