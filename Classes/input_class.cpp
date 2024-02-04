#include <iostream>

std::string name;
int x;

int main(){

    std::cout << "What is your age?: ";
    std::cin >> x; 

    std::cout << "What is your name?: " ;
    std::getline(std::cin >> std::ws, name); /*as there is get line after input of x, there will a new character introduced after it which will be excepted by getline. 
                                               to avoid we use std::ws.*/
                                             /*getline is a input system where lines get inputted. */
    
    std::cout << "Hello " << name << '.' << " You are " << x << " years old. " << '\n';

    return 0;
}