#include<iostream>
#include<vector>
typedef std::string sentence_t;
using text_t = std::string;

int main(){
    std::string sentence = "Hello World!\n";
    sentence_t sentence2= "Hello World!\n";
    text_t sentence3 = "Hello World!";
    std::cout<< sentence << sentence2 << sentence3;
    return 0;
}