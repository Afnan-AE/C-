#include <iostream>
using namespace std;

//nested loop is a loop which is subset of another loop

int main(){
     for(int i = 1;i <= 3;i++){
          for(int j = 1;j <= 4;j++){
          cout << j << ' ';
          }
          cout << endl;    
     }
 
     return 0;
}