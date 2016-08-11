#include <iostream>
#include <iomanip>
using namespace std;

int packOranges(int tot, int boxBig_size, int boxMedium_size){
    int boxBig, boxMedium, remain;
    boxBig = tot / boxBig_size;  
    boxMedium = (tot - boxBig * boxBig_size) / boxMedium_size;  
    remain = tot - boxBig * boxBig_size - boxMedium * boxMedium_size;  
    cout << setw(9) << tot     
         << setw(18) << boxBig       
         << setw(18) << boxMedium   
         << setw(16) << remain << endl; 
    return 0;
}  
    
char getUserChoice(){
    char choice;
    do {
        cout << "Continue? Your choice [y/n]: ";
        cin >> choice;
    } while (choice != 'y' && choice != 'n');
    cout << endl;
    return choice;
}
 
int main(){
    do {
        int boxBig_size;
        int boxMedium_size;
        cout << "Input the sizes of the big and medium boxes: ";
        cin >> boxBig_size >> boxMedium_size;
        cout << "Count of Oranges      Big boxes      Medium boxes      Remaining" << endl;
        cout << "================      =========      ============      =========" << endl;

        for(int i = 50; i <= 250; i += 50){
            packOranges(i, boxBig_size, boxMedium_size);
        }
    } while (getUserChoice() == 'y');
    return 0;
}
