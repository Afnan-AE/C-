#include <iostream>
#include <ctime>
using namespace std;

char uc();
char cc();
void chs(char c);
void wd(char i, char u);
char r;

void game(){

    char i = uc();
    cout << "Your choice: ";chs(i);

    cout << ' ' << endl;

    char u = cc();
    cout << "Computer choice: ";chs(u);
    cout << " " << endl;

    wd(i, u);

    cout << ' ' << endl;

    cout << "**********************" << endl;
    while(!(r == 'Y'||r == 'y'||r == 'n'||r == 'N')){
        cout << "Do you want to continue?\nY for yes\nN for no\n";
        cout << "= ";cin >> r;
    }

}

char uc(){

    char bg;


    do
    {   
        cout << "**********************\n";
        cout << "Choose any: " << endl;
        cout << "'r' for Rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for Scissors\n";
        cout << "= "; cin >> bg;

    }while(!(bg == 'r'||bg == 'p'||bg == 's'));

    return bg;
}

char cc(){

    srand(time(0));
    int y = (rand() % 3) + 1;
 
    switch (y)
    {
        case 1: return 'r';
        case 2: return 'p'; 
        case 3: return 's'; 
    }    
}

void chs(char c){

    switch (c)
    {
    case 'r':
        cout << "Rock";
        break;
    
    case 'p': 
        cout << "Paper";
        break;
    case 's':
        cout << "Scissor";
    }

}

void wd(char i, char u){

    switch (i)
    {
    case 'r':
        if(u == 'r'){cout << "Its a tie.\n";}
        if(u == 's'){cout << "You Win!\n";}
        if(u == 'p'){cout << "Computer wins............\n";}
        break;
    case 'p':
        if(u == 'p'){cout << "Its a tie.";}
        if(u == 'r'){cout << "You Win!\n";}
        if(u == 's'){cout << "Computer wins............\n";}
        break;
    case 's':
        if(u == 's'){cout << "Its a tie.\n";}
        if(u == 'p'){cout << "You Win!\n";}
        if(u == 'r'){cout << "Computer wins............\n";}
        break;

    }
}

int main(){
    game();
    while(r == 'y'||r == 'Y'){
        r = NULL;
        game();
    }
    cout << "Bye.";
}