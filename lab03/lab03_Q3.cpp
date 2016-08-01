#include <iostream>
using namespace std;

int main(){
    int s, s1 = 0, s2 = 0, s3 = 0;
    char conti;
    while (conti != 'n'){
        for (int i = 0; i < 3; i++){
            cout << "Input one length of a triangle's side: ";
            cin >> s;
            if (s >= s1) {
                s3 = s2;
                s2 = s1;
                s1 = s;
            }
            else if (s <= s2) s3 = s;
            else s2 = s;
            cout << s1 << " " << s2 << " " << s3 << endl;
        }
        if (s2 + s3 < s1 || s1 - s2 > s3){
            cout << "Impossible" << endl;
        }
        else {
            if (s1 == s2 && s2 == s3) cout << "Equilateral" << endl;     
            else if (s1 == s2 || s1 == s3 || s2 == s3) cout << "Isosceles" << endl;
            else cout << "Scalene" << endl;
        }
        s1 = 0;
        s2 = 0;
        s3 = 0;
            
        cout << "Continue? Your choice[y/n]: ";
        cin >> conti;
    }
    return 0;
}
