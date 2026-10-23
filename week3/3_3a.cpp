#include <iostream>
int main(){
    int size; 
    std::cin >> size;
    for(int row = 1; row <= size; row++){
        for(int col = 1; col <= size ; col++){
            std::cout << col*row << "\t";
        }
        std::cout << std::endl;
    }
}
