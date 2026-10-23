#include <iostream>
int main(){
    double n, counter = 0;
    std::cout << "Enter a number to find its quotentient and remainder" << std :: endl;
    std::cin >> n;

    while(n>2){
        n = n-3;
        counter=counter+1;
    }
    std::cout << "your quotient is "<< counter << " your remainder is "<< n<< std::endl;
}