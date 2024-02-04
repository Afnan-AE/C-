//ternary operator = ? = replacement for if/else statement

#include <iostream>
using namespace std;

string p;

int main(){

    cout << "Enter password: "; cin >> p;
    cout << (p == "Evan" ? "You are correct.":"You are incorrect."); // First way
    p == "Evan" ? cout << "You are correct. " : cout << "You are incorrect. "; // Second way

    return 0;
}