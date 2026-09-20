#include<iostream>
#include <iomanip>
int main(){
    int j=2;
    for(int i=1; i<=10; i++){
        std::cout << std::setw(3) << i << "   ";
    }
    std::cout<< '\n';
    for(int k=1; k<10; k++){
        for(int t=1; t<=10; t++){
            std::cout << std::setw(3) << j*t << "   ";
        }
        j++;
        std::cout << '\n';
    }
    return 0;
}