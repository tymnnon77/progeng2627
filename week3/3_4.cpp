#include <iostream>
int main(){ 
    int x, curmax, curmin;
    std::cout << "please enter a number" << std::endl;
    std::cin >> x;
    curmax=x;
    curmin=x;

    while( x!=0 ){
        std::cout << "please enter a number" << std::endl;
        std::cin >> x;

        if(x==0){
            break;
        }

        else if( x>curmax ){
            curmax=x;
        }
        else if (x<curmin){
            curmin=x; 
        }
        

        std::cout << "max so far is " << curmax << std::endl;
        std::cout << "min so far is " << curmin << std::endl;
    }

}