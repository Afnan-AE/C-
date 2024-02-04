#include <iostream>
using namespace std;

int main(){

     for(int i = 10; i >= 0; i--){
          if(i == 5){
               break;
          }
     cout << i << endl;
     }

     for(int j = 10; j >= 0; j--){
          if(j == 5){
               continue;
          }
     cout << j << ' ';
     }
     return 0;
     
}