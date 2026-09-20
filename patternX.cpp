// X pattern

#include<iostream>
int main(){
    int columns;
    std::cout << "Enter a odd number of colums: ";
    std::cin >> columns;
    int temp = columns;
    if(columns%2==0){
        std::cout << "Not an odd number";
    }
    else{
        for(int i=1;i<=columns;i++){
            for(int j=1;j<=columns;j++){
                if(j==i||j==temp){
                    std::cout << "*";
                }
                else{
                    std::cout << " ";
                }
            }
            std::cout << '\n';
            temp--;
        }
    }
    return 0;
}