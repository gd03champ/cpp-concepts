#include <iostream>

int main(){

    int number  = 0;

    if (number == 0){
        std::cout << "number is 0";
    } else {
        std::cout << "number is non 0";
    }

    //is same as 
    std::cout << std::endl; 

    if (number == 0)
        std::cout << "number is 0";
    else
        std::cout << "number is non 0";

    //for single statement code blocks within if esle

    return 0;
}