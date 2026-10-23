#include <iostream>
#include <string>
int main(){
    double n1, n2, sum;
    std::cout << "Enter first number: ";
    std::cin >> n1;
    std::cout << "Enter second number: ";
    std::cin >> n2;
    sum = n1 + n2;
    std::cout << "The sum is: " << sum << std::endl;
    double a, b, c;
    a=1;
    b=2;
    c=a+b;
    std::cout << c << std::endl;
    a=2;
    std::cout << c << std::endl;
    c=a+b;
    std::cout << c << std::endl;
}