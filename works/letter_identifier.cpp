#include <iostream>
using namespace std;

char x;

int main(){

    cout << "Enter any alphabet: " ;
    cin >> x;

    switch (x)
    {
    case 'A'...'Z':
        cout << "YOu entered a Capital alphabet. ";
        break;
    case 'a'...'z':
        cout << "YOu entered a small alphabet. ";
        break;
    default:
        cout << "Please enter any alphabet. ";
        break;
    }
    return 0;
}