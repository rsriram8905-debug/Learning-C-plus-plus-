#include <iostream>
int main(){
    char a;
    std::cout << "Enter a grade: ";
    std::cin >> a;
    switch(a){
        case 'A':
        std::cout << "Great!";
        break;
        case 'B':
        std::cout << "Good!";
        break;
        case 'C':
        std::cout << "Mid!";
        break;
        case 'D':
        std::cout << "Bad!";
        break;
        case 'F':
        std::cout << "Fail!";
        break;
        default:
        std::cout << "Only enter letter (A-F)";
    }
    return 0;
}