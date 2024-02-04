#include <iostream>
using namespace std;

//pointers = a variable which store memory address of other variable
//                        *sometimes it's easier to work with addresses

string g[3] = {"pizza1","pizza2","pizza3"};
int a = 21;
string n = "AKi";

int main()
{
    string *nN = &n; // giving the * before the variable name will make it a pointer.
    string *gG = g;  // in case of array we don't need to use & to reference the array 
                   // cause the array is already a natural memory address of elemnts.
    int *aA = &a;

    cout << nN << '\n';// will output address of variable n.

    cout << *aA << '\n'; // will output variable element
    
                        //if we give the * before the variable while printing we will
                        //access the element of that variable at that address.
    cout << gG << '\n'; 

    

    
    return 0;
}