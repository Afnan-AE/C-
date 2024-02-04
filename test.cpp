#include <iostream>
using namespace std;

int main(){
    string x, y;

    do{
        cin >> x >> y;
    }while((x.length() != y.length()) && x.length() < 0 && y.length() < 0);

    cout << x << '\n' << y;

    return 0;
}