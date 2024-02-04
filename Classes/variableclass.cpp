//Variable class = integer, double, character, boolean and string

#include <iostream>

int main() {

    //integer
    int age = 16;
    int x = 2;
    int date = 23;
    int sum = x + age;

    

    //double
    double gpa = 3.0;
    double temperature = 25.6;
    double price = 68.99;

    

    //character
    char pad = 'P';
    char paad = 'A';
    char paaad = 'D';

    //boolean
    bool student = true;
    bool female = false; // this variable returns 1 (true) or 0(false) as answer;

    

    //string
    std::string name = "AKi";
    std::string nade = "Nubaid is ";
    

    std::cout << nade << pad << paad << paaad << '\n';
    std::cout << name << " is " << age << " years old." << '\n';
    std::cout << name << " got a " << gpa << " gpa point on " << date << '.' << '\n';
    std::cout << "The temperature is very hot today. It is " << temperature << " degree celcius." << '\n';
    std::cout << "The price of this khata is " << price << " taka. " << '\n';

    return 0;
}