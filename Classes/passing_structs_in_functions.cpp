#include <iostream>
using namespace std;

struct g
{
    string n;
    int y;
    string c;
};

void sg(g &ca);
void cl(g &ca, string nc);

int main(){

    g c1;
    g c2;

    
    c1.n = "Toyota";
    c1.y = 2;
    c1.c = "Blue";

    
    c2.n = "Ford";
    c2.y = 4;
    c2.c = "White";

    cl(c1, "Red");

    cout << &c1 << '\n';
    sg(c1);
    cout << &c2 << '\n';
    sg(c2);

    return 0;

}

void sg(g &ca){
    cout << &ca << '\n';
    cout << ca.n << '\n';
    cout << ca.y << " years\n";
    cout << ca.c << '\n';
    cout << '\n';
}

void cl(g &ca, string nc){
    ca.c = nc;
}
