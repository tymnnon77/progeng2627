#include <iostream>

int main(){
    int x, m, answer;
    std::cin >> x;
    m = x-1;
    answer=x;
    for(int i = 0; i < (x-1); i++){
    answer = answer*m;
    m=m-1;
    }
    std::cout << answer << std::endl;
}