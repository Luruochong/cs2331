#include <iostream> 
using namespace std; 

int daysInMonth(int month){
    int answer;  
    switch (month){   
        case 1:    
        case 3:    
        case 5:    
        case 7:   
        case 8:    
        case 10:   
        case 12:
            answer = 31;     
            break;
    }
    switch (month){
        case 4:
        case 6:
        case 9:
        case 11:
            answer = 30;
            break;
    }
    if (month == 2)
        answer = 28;
    return answer; 
} 
  
int countDaysSince2005Jan01(int day_upto, int month_upto){
    int tot = 0;
    for (int m = 1; m < month_upto; m++){
        tot += daysInMonth(m);
    }
    tot += day_upto;
    return tot;
}


int main(){
    int d, m, n; 
    char dummy_for_slash;  
    cout << "Input a date (d/m) in 2005: ";
    cin >> d >> dummy_for_slash >> m;
    n = countDaysSince2005Jan01(d, m);
    if (n ==1)   
        cout << "There is 1 day.\n";  
    else 
        cout << "There are " << n << " days.\n"; 
    return 0;
}

 
