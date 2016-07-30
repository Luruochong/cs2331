#include <iostream>

int main(){

    int sec;
    std::cout << "Please enter the number of seconds: ";
    std::cin >> sec;
    int hour = sec / 3600;
    std::cout << sec << " second(s) = " << hour << " hour(s) " << sec / 60 - hour * 60 << " minute(s) " << sec % 60 << " second(s)" << std::endl;
    return 0;




}
