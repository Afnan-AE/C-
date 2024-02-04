#include <iostream>
#include <ctime>
using namespace std;

int main(){

     srand(time(0));
     int i = (rand() % 5);
     cout << i << ". ";

     switch (i){
          case 0: cout << "You are factory waste product"; break;
          case 1: cout << "You are paralyzed hagar dola"; break;
          case 2: cout << "You are stupid"; break;
          case 3: cout << "You are normal"; break;
          case 4: cout << "You are intellegent"; break;
     }
     

     return 0;
}