#include <iostream>

int display5yrsCapitalInterest(int capital, double rate){
    double amount = capital;
    std::cout << "Capital: " << amount;

    for(int i = 0; i < 5; i++){
       amount = amount * (1 + rate);
       std::cout << " => " << amount;
    }

    std::cout << std::endl;
    return 0;
}


int main(){
    int capital;
    double rate;
    std::cout << "Please enter your capital and rate: ";
    std::cin >> capital >> rate;
    display5yrsCapitalInterest(capital, rate);
}


