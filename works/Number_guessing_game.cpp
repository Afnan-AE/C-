#include <iostream>
#include <ctime>
using namespace std;

int i;
int g;
int t;

int main(){
     srand(time(NULL));
     i = rand() % 100 + 1;

     do{
          cout << "Enter a guess(1 - 100): "; cin >> g;
          t++;
          if(g < i){
               cout << '\n' << "TOO LOW!\n" << endl;
          }
          else if(g > i){
               cout << '\n' << "TOO HiHG!\n" << endl;
          }
          else{
               cout << '\n' << "Correct! You have done it after " << t << " tries." << endl;
               cout << '\n';
          }
     }while(!(g == i));

     return 0;
}