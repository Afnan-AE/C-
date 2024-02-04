#include <iostream>
using namespace std;

int r;
int c;
char s;

int main(){
     cout << "**********************Rectangle genarator*********************\n";
     cout << "Number of rows: "; cin >> r;
     cout << "Number of column: "; cin >> c;
     cout << "Symbol(single alph): "; cin >> s;
     cout << endl;

     if(r >= 0 && c >= 0 && s >= 'a'  && s >= 'A'){

          for(int i = 1; i <= c; i++){
               for(int j = 1;j <= r;j++){
                    cout << s << ' ';
                    }
               cout << endl;
          }
          cout << endl << "Rectangle Genarated!" << '\n';
          cout<< "**********************************************************";
     }

     else{
          cout << "********************YOU MAY HAVE MISTAKEN!**********************" << endl;
          cout << "Enter your\n   *rows in numbers\n   *columns in number\n   *symbol in alphabet" << endl;
     }
     

     return 0;
}