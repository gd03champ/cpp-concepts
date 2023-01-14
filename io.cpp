# include <iostream>

int main(){
    int num;
    char alpha;

    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Enter a char: ";
    std::cin >> alpha;

    std::cout << std::endl << "Entered number is " << num << std::endl << "Entered character is " << alpha;

    return 0;
}