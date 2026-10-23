#include <iostream>
#include <string>
int main(){
    std::cout << "hello everyone " << std::endl;
    std::cout << "What is your name ? ";
    std::string name;
    std::cin >> name;
    std::cout << "What is your surname ? ";
    std::string surname;
    std::cin >> surname;
    std::cout << "Hello, " << name <<"  "<<surname << "!" << std::endl;
}