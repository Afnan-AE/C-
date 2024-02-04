#include <iostream>
using namespace std;

//memory addresses = a place in the device where
//variable stores it data.

int age = 12;
string name = "Tekta";
bool student = true;
//*it is displayed in hexadecimal

int main(){
    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}