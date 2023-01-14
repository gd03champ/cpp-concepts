#include <iostream>

int add(int,int);  //function prototype

int main(){
    int x,y;
    std::cout << "sum of x and y is: " << add(x,y);
}

int add(int a, int b){
    return a+b;
}