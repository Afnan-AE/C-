#include <iostream>
using  namespace std;

int gd(const int n);
int sed(const string cn);
int sod(const string cn);

int main()
{
    string cn;
    cout << "Enter Credit Card Number: "; cin >> cn;

    int result = sed(cn) + sod(cn);

    if(result % 10 == 0){
        cout << cn << " is valid. ";
    }
    else{
        cout << cn << " is not valid. ";
    }
    return 0;
}

int gd(const int n){
    int g = n % 10 + (n / 10 % 10);
    return g;
}

int sed(const string cn){

    int sum1 = 0;

    for(int i = cn.size() - 2; i >= 0; i-=2){
        sum1 += gd((cn[i] - '0')*2);
    }

    return sum1;
}

int sod(const string cn){

    int sum2 = 0;

    for(int i = cn.size() - 1; i >= 0; i-=2){
        sum2 += gd(cn[i] - '0');
    }

    return sum2;
}