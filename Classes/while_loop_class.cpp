#include <iostream>
using namespace std;

string i;
int j;
char x;

int main(){

    while(!(i == "Evan" || i == "EvanHaga")){
        cout << "Enter password: ";
        getline(cin, i);
    }

    cout << "Welcome to website! " << endl;

    while(!(j == 2)){
        cout << "Haga will be printed 2 times. " << endl;
        j++;
    }

    

    do{
        cout << "Press q to exit the game.\n ";
        cin >> x;
    }while (!(x == 'q'));
    
    

    return 0;
}
