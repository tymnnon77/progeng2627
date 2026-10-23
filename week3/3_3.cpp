#include <iostream>

int main(){
    int x, col, row=0;
    std::cin >> x;
    while( row<x ){
        col=0;
        while( col<x ){
            std::cout << "*";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
}