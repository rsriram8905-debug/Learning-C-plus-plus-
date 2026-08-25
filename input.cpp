#include <iostream>
int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::string course;
    std::cout << "Enter your course: ";
    std::getline(std::cin >>std::ws, course);
    // after cin there is an input buffer '\n' which gets accepted by getline. 
    //To remove the input buffer >>std::ws (standard whitespace) is used.

    std::cout << "You are " << name << ". You are " << age << " years old." << " The course you have chosen is " << course;
}