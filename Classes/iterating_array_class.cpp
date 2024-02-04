#include <iostream>
using namespace std;

string n[] = {"Peter", "Gwen", "Miguel", "Miles"};
int v[] = {616, 1567, 2099, 68};

int main(){
    for(int i = 0;i < 4;i++){
        cout << n[i] << " is from Earth-" << v[i] << '.' << endl;
    }
}

