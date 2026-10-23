#include <iostream>
int main(){
    double n, sum = 0, count=1;
    
    std::cout << "Enter a number (0 to stop): ";
    std ::cin >> n;
    
    while(n!=0){
        sum= sum + n;
        double avg = sum/count;
        count= count + 1;
        std::cout << "avg so far is " << avg << std::endl;
        std::cin >> n;
    }
