#include <iostream>
using namespace std;

//enum = an enum is a array type store, where variables are stored with side asided integers.

enum n {evan, nubaid, rehan, tanvir, alvee};

int main(){

    int na;
    cout << "choose a name: \n";
    cout << "evan#1\nnubaid#2\nrehan#3\ntanvir#4\nalvee#5\n:";
    cin >> na;

    na--;

    n name = n(na);

    switch (name)
    {

    case evan:
        cout << "Average choice!\n";
        break;
    case nubaid:
        cout << "Sigma choice!\n";
        break;
    case rehan:
        cout << "Weird choice!\n";
        break;
    case tanvir:
        cout << "Gay choice!\n";
        break;
    case alvee:
        cout << "Sussy choice!\n";
        break;

    return 0;
    }

}