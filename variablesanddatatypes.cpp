#include<iostream>
int main(){

    //Integer

    int x; //declaration
    x = 5; //assignment
    std::cout << x << '\n';
    int y;
    std::cout << y << '\n'; //This will give garbage value
    y = 10;
    std::cout << y << " This is not a garbage value\n";

    //Float and Double

    float marks = 10.5;
    double price = 20.988;

    std::cout<< marks << '\n' << price << '\n';

    //Character

    char grade = 'A';
    char initial = 'R';

    std::cout << grade << '\n';
    std::cout << initial << '\n';

    //Boolean

    bool Student = true;
    bool Teacher = false;
    bool light = 0;
    bool asleep = 1;

    std::cout<< Student << " " << Teacher << " " << light << " " << asleep << '\n';

    //String

    std::string name = "R. Sriram\n";
    name.pop_back();

    std::string day = "Sunday\n";
    day.pop_back();

    std::string username = "Sriram_123 hello world@!\n";
    username.pop_back();

    std::cout << name << '\n' << day << '\n' << username << '\n';

    return 0;
}