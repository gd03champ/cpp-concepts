#include <iostream>

int main(){
    int b = 10;

    switch(b){

        case 20:
            std::cout << "b value is 20";
            break;

        case 10:
            std::cout << "b value is 10";
            break;

        default:
            std::cout << "default value";
            break;
    }

}