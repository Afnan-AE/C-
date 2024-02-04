#include <iostream>
using namespace std;

double sq(double x)
{
     return x * x;
};
void h(string i){
     cout << "Hello " << i;
}
string w(string b){
     return "bye. "+ b;
}

int n1;
string n;
string b;
int main(){

     cin >> n1;
     int answer = sq(n1);
     cout << answer << endl;

     cin >> n;
     h(n);
     cout << endl;

     cin >> b;
     string v = w(b);
     cout << v;
     
     return 0;
}