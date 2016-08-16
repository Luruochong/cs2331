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

int displayDayOfWeek(int d){  
    switch(d){   
    case 0: cout << "Sunday"; break;
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    }
    return 0;
} 

int main(){
    int d, m, n, w; 
    char dummy_for_slash;  
    cout << "Input a date (d/m) in 2005: ";
    cin >> d >> dummy_for_slash >> m;
    n = countDaysSince2005Jan01(d, m);
    cout << d << dummy_for_slash << m << dummy_for_slash << "2005 is ";
    displayDayOfWeek((5 + n) % 7);
    cout << "." << endl;
    return 0;
}
