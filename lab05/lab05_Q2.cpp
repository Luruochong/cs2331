#include <iostream> 
using namespace std;
  
int main() { 
    int marks[10];
    int n;
    cout << "How many marks?  Your answer (at most 10): "; 
    cin >> n;   
    cout << "Input " << n << " marks: ";
    for (int i = 0; i < n; i++){
        cin >> marks[i];
        marks[i]+=10; 
    }
    cout << "After adding bonus, the marks are: ";
    for (int i = 0; i < n; i++)
        cout << marks[i] << " "; 
    cout << endl;
    return 0;
} 

