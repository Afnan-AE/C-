#include <iostream>
using namespace std;

double t;
char u;

int main()
{
    cout << "*************************Temperature converter***************************"<< endl;
    cout << "What do you want to convert to? " << endl;
    cout << "C for Celcius. " << endl << "F for Farenheit. " << endl;
    cin >> u;

    if (u == 'C'||u == 'c'){
        cout << "Enter your temperature(Farenheit): "; cin >> t;
        cout << "Converted temperature in to Celcius. Answer: " << (t - 32) / 1.8 << 'C'; 
    }
    else if(u == 'F'||u == 'f')
    {
        cout << "Enter your temperature(Celcius): "; cin >> t;
        cout << "Covnerted temprature in to Farenheit. Answer: " << (t * 1.8) + 32 << 'F';

    }
    else{cout << "Enter wether in C/c for F/f " ;}

    cout << '\n';
    cout << "************************************************************************";
    return 0;
}