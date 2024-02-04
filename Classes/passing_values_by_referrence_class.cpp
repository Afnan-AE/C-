#include <iostream>
using namespace std;

void s(string &x, string &y);

//passing through referrence refers to passing the real
//location of a variable.

int main(){

    string x = "Coffee";
    string y = "Tea";

    s(x, y);

    cout << "X: " << &x << '\n';
    cout << "Y: " << &y << '\n';

    return 0;
}

void s(string &x, string &y){//after in parametres, I pass the values with it's referrence
//i will use the original variable (normally copies of variables are using in other functions),
    cout << "X: " << &x << '\n';
    cout << "Y: " << &y << '\n';

//now as i passed the variables with reference it will execute its
//original memory address.
}