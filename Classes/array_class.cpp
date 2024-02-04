#include <iostream>
using namespace std;

string sn[] = {"David", "Akbar", "Gwen", "Maisha"};

int age[4];

int main()
{
    age[0] = 11;
    age[1] = 12;
    age[2] = 13;
    age[3] = 14;

    cout << sn[0] << ", ";
    cout << sn[1] << ", ";
    cout << sn[2] << ", ";
    cout << sn[3];
    cout << ' ' << endl;
    cout << sn[0] << " is " << age[0] << " years old." << endl;
    cout << sn[1] << " is " << age[1] << " years old." << endl;
    cout << sn[2] << " is " << age[2] << " years old." << endl;
    cout << sn[3] << " is " << age[3] << " years old." << endl;

    return 0;
}