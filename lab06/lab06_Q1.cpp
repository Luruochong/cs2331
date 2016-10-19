#include <iostream>
using namespace std;

const int MAX_ARR_SIZE = 50;
int input_into_arr(int arr[], int &size){
    int value;
    size = 0;
    while (value != -1){
        arr[size] = value;
        size++;
        cin >> value;
    }
    return 0;
}

int collect_monthly_counts(int monthly_counts[], const int inputMonths[], int cnt_inputMonths){
    int j;
    for (int i = 0; i < cnt_inputMonths; i++){
        j = inputMonths[i] - 1;
        monthly_counts[j]++;
    }
    return 0;
}

int displayMonthName_0Based(int iZeroBased){
    switch(iZeroBased){
        case 0: cout << "Jan";break;
        case 1: cout << "Feb";break;
        case 2: cout << "Mar";break;
        case 3: cout << "Apr";break;
        case 4: cout << "May";break;
        case 5: cout << "Jun";break;
        case 6: cout << "Jul";break;
        case 7: cout << "Aug";break;
        case 8: cout << "Sep";break;
        case 9: cout << "Oct";break;
        case 10: cout << "Nov";break;
        case 11: cout << "Dec";break;
    }
    return 0;
} 

int displayMonthlyCounts(const int monthly_counts[]){
    for (int i = 0; i < 12; i++){
        displayMonthName_0Based(i);
        cout << ":" << monthly_counts[i] << endl;
    }
    return 0;
}

int summarizeMaxCounts(const int monthly_counts[]){
    int Max = monthly_counts[0];
    int i;
    for (i = 0; i < 12; i++){
        if (Max < monthly_counts[i]){
            Max = monthly_counts[i];
        }
    }
    cout << "Maximum count is: " << Max << " - " << displayMonthName_0Based(i);
    return 0;
} 

int main(){
    int inputMonths[MAX_ARR_SIZE] = {0}; 
    int cnt_inputMonths; 
    int monthly_counts[12] = {0};
    cout << "Input the months of birthdays of the class (1..12, ended with -1): ";
    input_into_arr(inputMonths, cnt_inputMonths);
    cout << endl;
 
    cout << "You've entered " << cnt_inputMonths << " month numbers.\n\n";
 
    collect_monthly_counts(monthly_counts, inputMonths, cnt_inputMonths);
 
    cout << "[Listing of monthly counts]\n";
    cout << "===========================\n";
    displayMonthlyCounts(monthly_counts);
    cout << endl;
 
    summarizeMaxCounts(monthly_counts);
    cout << endl;
    return 0;
} 
