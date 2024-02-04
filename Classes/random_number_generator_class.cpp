#include <iostream>
#include <ctime> // this is required to time function.
using namespace std;

//random number genarotor can help create simple games and npc.

int main(){

     srand(time(NULL));

     int i = (rand() % 6) + 1;
     int i2 = (rand() % 6) + 1;
     int i3 = (rand() % 6) + 1;

     cout << i << '\n';
     cout << i2 << '\n';
     cout << i3 << '\n';

     return 0;
}

