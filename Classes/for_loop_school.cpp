#include <iostream>
using namespace std;

string i;
int t;

int main(){

     cout << "Write something: "; getline(cin, i);
     cout << "How many times do you to print what you wrote?: "; cin >> t;

     for(int y = 1; y <= t; y++){
          cout << i << endl;
     }

     //for(int r = 1;r <= 7;){
          //cout << " nice ";
     //}
     return 0;
}