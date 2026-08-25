#include <iostream>
#include <cmath> //includes math functions

int main(){

    double a=10.5;
    double b=10.9;
    double c=10.1;

    std::cout << std::max(a,b) << '\n';
    std::cout << std::min(a,b) << '\n';
    std::cout << pow(2,3) << '\n';
    std::cout << sqrt(9) << '\n';
    std::cout << abs(-3) << '\n';
    std::cout << round(a) << '\n';
    std::cout << round(b) << '\n';
    std::cout << round(c) << '\n';
    std::cout << ceil(a) << '\n';
    std::cout << floor(a) << '\n';    

    return 0;
}