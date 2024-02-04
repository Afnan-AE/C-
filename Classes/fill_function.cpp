#include <iostream>
using namespace std;

int main()
{
    const int si = 100;
    string f[si];

    fill(f, f + (si/4), "Ruti");
    fill(f + (si/4), f + (si/4)*2, "Porota");
    fill(f + (si/4)*2, f + (si/4)*3, "Dal");
    fill(f + (si/4)*3, f + si, "Vaji");

    for(string fo : f){
        cout << fo << '\n';
    }

    return 0;
}