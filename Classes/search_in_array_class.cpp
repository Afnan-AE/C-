#include <iostream>
using namespace std;

char g[] = {'A', 'B', 'C', 'D', 'F'};
int sizeg = sizeof(g)/sizeof(g[0]);
int in;
char n;

int sa(char g[], int size, char n);

int main(){

    cout << "Search your grade's index. Your Grade:  "; cin >> n;
    cout << " " << endl;

    in = sa(g, sizeg, n);

    if(in != -1){
        cout << "Your grade " << n << " is at index " << in << '\n';
        cout << ' ' << '\n';
    }
    else{
        cout << "Your grade " << n << " is not in the array.\n ";
    }

    return 0;
}

int sa(char g[], int size, char n)
{
    for(int i = 0; i < size; i++){
        if(g[i] == n){
            return i;
        }
        else{
            return -1;
        }
    }
}