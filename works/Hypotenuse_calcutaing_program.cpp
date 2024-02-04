//z = root over sum of a=x2 and y2

#include <iostream>
#include <cmath>

double x;
double y;
double z;

using namespace std;

int main(){

    cout << '\n';
    cout << " 1st side: "; cin >> x;
    cout << " 2nd side: "; cin >> y; cout << '\n';
    
    double z = sqrt(pow(x, 2) + pow(y, 2));

    cout << " The hyptenuse is " << z << '\n';
    cout << '\n';

    return 0;
}

