#include <iostream>
using namespace std;

//foreach loop = a loop that eases the traversal index 
//               of a iterable variable.

string n[] = {"Peter", "Gwen", "Miguel", "Miles"};

int main(){
    for(string nm : n){
        cout << nm << '\n';
    }
    return 0;
}

//  *has less flexibility than normal loop
//  *best for returning element of an array