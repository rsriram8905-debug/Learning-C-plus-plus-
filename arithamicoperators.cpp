#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    float c = 30.5;
    float d = 40.4;

    std::cout << "+ " << a + b << "\n";
    std::cout << "- " << a - b << "\n";
    std::cout << "* " << a * b << "\n";
    std::cout << "/ " << c / d << "\n";
    std::cout << "% " << a % b << "\n";
    

    std::cout << "++ " << a++ << "\n";   
    std::cout << "-- " << a-- << "\n";   
    
    a += 2; 
    std::cout << "+= " << a << "\n";     
    
    a -= 2;
    std::cout << "-= " << a << "\n";     
    
    a *= 2;
    std::cout << "*= " << a << "\n";     
    
    d /= 2;
    std::cout << "/= " << d << "\n";     

    return 0;
}