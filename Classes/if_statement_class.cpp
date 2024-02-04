// if statement = excute something if codes condition is true. otherwise doesn't.

#include <iostream>
using namespace std;

int age;

int main(){

    cout << "Enter your age: " ;
    cin >> age;

    if(age > 80)
    {
        cout << "You are too old to enter the website!";
    }
    else if (age >= 15)
    {
        cout << "WELCOME TO THE WEBSITE!";
    }
    else if (age < 0)
    {
        cout << "You didn't even born!";
    }
    else
    {
        cout << "You are not enough old to enter the website!";
    }
    return 0;
}