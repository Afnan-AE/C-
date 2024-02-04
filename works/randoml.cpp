#include <iostream>
#include <ctime>
using namespace std;

int a;

int man(){

    srand(time(NULL));
    int a = (rand() % 3);
    cout << a;
    return a;
}

int main(){
    man();
}