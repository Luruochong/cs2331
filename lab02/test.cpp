#include <iostream>
using namespace std;

int main(){
    int i = 0;
    double score = 0;
    double total = 0;
    while (true){
        cout << "Input a score: ";
        cin >> score;
        if (score < 0){
            break;
        }
        total = total + score;
        i++;
    }
    cout << "The average score is: " << total / i << endl;
    cout << total << endl;
    return 0;
}
