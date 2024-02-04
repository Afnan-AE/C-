#include <iostream>
using namespace std;

//const parametres = parameteres are made read only by
//                   by using this const function.
//*this tells the other program editor or coder to 
// not mess with this parameter/variable/pointer

void sf(const string &n, const int &a);

int main()
{
    int a = 16;
    string n = "Tekta";

    sf(n, a);//in return error will be genarated. if variable is modified in the function

    return 0;
}

void sf(const string &n, const int &a)
{
    cout << &n << '\n';
    cout << &a << '\n';
}

