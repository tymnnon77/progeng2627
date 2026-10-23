#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;
    long long result =1;
    for(int i = 0; i < y; i++){
    result= result*x; 
    }
    std::cout << result << std::endl;
}