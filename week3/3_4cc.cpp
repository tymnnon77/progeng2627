#include <iostream>
int main(){
    int n, rem, counter, max=0;
    counter=0;
    std::cout << " please enter a number" << std::endl;
    std::cin >> n;
    rem= n % 2;
    std::cout << n << "\t";
    while(n!=1){
        rem= n%2;
        if(rem==0){
           n = n/2;
           std::cout << n << "\t";
        }
        else{
            n= (3*n)+1;
            std::cout << n << "\t"; 
        }
        if(n>max){
            max=n;
        }
        counter= counter +1;
    }
    std::cout<< "." << std::endl;
    std::cout << "Amoumt of steps = " << counter << std::endl; 
    std::cout << "your max number was " << max;
}