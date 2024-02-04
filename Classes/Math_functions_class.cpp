//diff math functions

#include <iostream>
#include <cmath>

double x = 3.54;
double y = 8;
double z;

int main()
{

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(9);
    z = round(x);
    z = ceil(x);
    z = floor(x);
    z = abs(-78);

    std::cout << z;

    return 0;
}