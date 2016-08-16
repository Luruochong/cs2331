#include <iostream> 
using namespace std; 

bool isOdd(int num){
    if (num % 2 == 0)
        return false;
    else 
        return true;
}

int leftMostDigit(int num1){
    char a;
    do {
        num1 = num1 / 10;
    } while (num1 > 10);
    return num1;
}

int displayDigitsReversed(int num2){
    int rem;
    while (num2 != 0){
        rem = num2 % 10;
        cout << rem << " ";
        num2 = num2 / 10;
    } 
    return 0;
}

bool getIntSqRoot(int num3, int sqRoot){
    for (int i = 0; i < num3; i++){
        if (num3 / i == i){
            sqRoot = i;
            return true;
        }
        else
            return false;
    }
}
  
int main(){     
    int n;  
    bool hasIntSqRoot;
    int sqRoot;
    cout << "Input n (n>0): ";  
    cin >> n;
    if (isOdd(n))
        cout << "n is odd" << endl; 
    else   
        cout << "n is even" << endl;  
    cout << "Left-most digit of n is: " << leftMostDigit(n) << endl;  
    cout << "The digits in reversed order are: ";
    displayDigitsReversed(n);  
    cout << endl;  
    hasIntSqRoot = getIntSqRoot(n, sqRoot);  
    if (hasIntSqRoot == true)   
        cout << "The integral square root is " << sqRoot << endl;  
    else   
        cout << "No integral square root.\n"; 
    return 0;
} 
