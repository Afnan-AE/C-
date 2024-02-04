#include <iostream>
#include <cmath>
using namespace std;

double i;
double r;

int main(){
    cout << "Number: "; cin >> i;
    cout << "Root number: "; cin >> r;
    cout << "Answer: " << pow(i, 1/r);
    return 0;
}