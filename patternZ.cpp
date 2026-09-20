// Z pattern
#include<iostream>
int main(){
    int columns;
    std::cout << "Enter the number of columns";
    std::cin >> columns;
    int temp=columns;
    for(int i=1;i<=columns;i++){
        for(int j=1;j<=columns;j++){
            if(i==1 || i==columns){
                std::cout<<"*";
            }
            else{
                if(j==temp){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }
        }
        std::cout<<'\n';
        temp--;
    }
    return 0;
}