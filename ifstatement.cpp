#include <iostream>
int main(){
    int a;
    std::cout << "Enter your age: ";
    std::cin >> a;
    if(a>18&&a<100){
        std::cout<< "You can vote";
    }
    else if (a>=100 || a<18){
        std::cout << "You cannot vote";
    }
    else{
        std::cout << "Invalid input";
    }
    return 0;
}