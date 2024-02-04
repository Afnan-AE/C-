#include <iostream>
using namespace std;

//struct is a data type where multiple data types can be stored
// it's stored data types are called members
// we can use '.' to access the members

struct g
{
    string n;
    int age;
    bool ave;
};

int main()
{
    g g1;//we need to declare first and then set the value of variables
    g g2;

    g1.n = "RDR";
    g1.age = 7;
    g1.ave = true;

    g2.n = "Apex";
    g2.age = 4;
    g2.ave = true;

    cout << g1.n << '\n';
    cout << g1.age << " years" <<  '\n';
    cout << g1.ave << '\n';

    cout << g2.n << '\n';
    cout << g2.age << " years"<< '\n';
    cout << g2.ave << '\n';

    return 0;
}