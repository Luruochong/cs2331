#include <iostream>
using namespace std;

int main(){
    int choice;
    cout << "Input your preferred style[1, 2, 3]: ";
    cin >> choice;
    if (choice == 1){
        for (int i = 1; i <= 4; i++){
            cout << 19 * i << endl;
        }
    }

    else if (choice == 2){
        int up_to;
        cout << "Input the up-to value: ";
        cin >> up_to;
        int i = 1;
        int muti_19 = 19 * i;
        while (muti_19 <= up_to){
            muti_19 = 19 * i;
            if (muti_19 >= up_to) break;
            cout << muti_19 << endl;
            i++;
        }
    }

    else if (choice == 3){
        char conti;
        int i = 1;
        cout << 19 * i << endl << "Continue? Your choice[y/n]: ";
        cin >> conti;
        i = 2;
        while (conti != 'n'){
            cout << 19 * i << endl << "Continue? Your choice[y/n]: ";
            cin >> conti;
            i++;
        }
    }
    else cout << "No this kind of syle." << endl;
    return 0;
}
