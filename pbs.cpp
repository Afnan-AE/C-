#include <iostream>
using namespace std;

int main(){
    char f = 'a';
    char h = 'a';

    if(f == (h+32)){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}