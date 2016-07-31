#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i1= 0;
    double score = 0;
    double total = 0;
    double highest_score = 0;
    double lowest_score = 100;
    double score_list[1000];
    double average = 0;
    bool abort = false;
    double deviation = 0;

    while(!abort){
        cout << "Input a score: ";
        cin >> score; 
        if (score == -1) abort = true;

        else {
            if (score < 0 || score > 100){
                cout << "It is a wrong number, please re-enter!" << endl;
                continue;
            }
            if (highest_score < score){
                highest_score = score;
            }
            if (lowest_score > score){
                lowest_score = score;        
            }
            score_list[i1] = score;
            total = total + score;
            i1++;    
        }
    }
    average = total / i1;
    cout << "i1 = " << i1 << endl;
    for (int i2 = 0; i2 < i1; i2++){
        deviation = deviation + pow((score_list[i2] - average), 2);
        cout << score_list[i2] << " " << deviation << endl;
    }
    cout << "The highest score is " << highest_score << endl << "The lowest score is " << lowest_score << endl << "The average is " << average << endl << "The sdandard deviation is " << sqrt(deviation / i1) << endl;
    return 0;
}
