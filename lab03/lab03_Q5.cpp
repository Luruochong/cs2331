#include <iostream>
using namespace std;

int show_chars(char c_start, char c_end){
    char c=c_start;
    if (c_start > c_end){
        cout << c_start << " is not in front of " << c_end << endl;
    }
    else if (c_start == c_end){
        cout << "Sorry, please input different characters." << endl;
    }
    else {
        while (c != c_end){
            int c_int = c;
            cout << c << "<" << c_int << ">" << " ";
            c++;
        }
        int c_int = c;
        cout << c_end << "<" << c_int << ">" << endl;
    }
    return 0;
}

int main(){
    char c1, c2;
    cout << "Input starting character: ";
    cin >> c1;
    cout << "Input ending character: ";
    cin >> c2;
    show_chars(c1,c2);
    return 0;
}
