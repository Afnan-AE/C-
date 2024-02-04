#include <iostream>
#include <ctime>
using namespace std;

void dB(char *sp);
void pM(char *sp , char p);
void cM(char *sp , char c);
bool sW(char *sp , char p, char c);
bool cT(char *sp);

int main(){
     
    char sp[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char p = 'X';
    char c = 'O';
    bool r = true;

    dB(sp);

    while(r){

        pM(sp, p);
        dB(sp);
        if(sW(sp, p, c)){
            r = false;
            break;
        }
        else if(cT(sp)){
            r = false;
            break;
        }

        cM(sp, c);
        dB(sp);
        if(sW(sp, p, c)){
            r = false;
            break;
        }
        else if(cT(sp)){
            r = false;
            break;
        }
    }
    return 0;
}

void dB(char *sp){
    cout << '\n';
    cout << "     |     |     \n";
    cout << "  " <<sp[0]<< "  |  " <<sp[1]<<"  |  " << sp[2] << "   \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " <<sp[3]<< "  |  " <<sp[4]<<"  |  " << sp[5] << "   \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " <<sp[6]<< "  |  " <<sp[7]<<"  |  " << sp[8] << "   \n";
    cout << "     |     |     \n";
    cout << '\n';
}

void pM(char *sp, char p){
    int n;
    do{
        cout << "Enter the box number to place your marker(X)(1 - 9): ";
        cin >> n;
        n--;
        if(sp[n] == ' '){
            sp[n] = p;
            break;
        } 
    }while(!n > 0 || !n < 8);
}

void cM(char *sp, char c){
    int n;
    srand(time(0));
    cout << "Computer choosing(O)\n";
    while(true){
        n = rand() % 9;
        if(sp[n] == ' '){
            sp[n] = c;
            break;
        } 
    }
}

bool sW(char *sp , char p, char c){
    //horizontal
    if(sp[0] != ' ' && sp[0] == sp[1] && sp[1] == sp[2]){
        sp[0] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    else if(sp[3] != ' ' && sp[3] == sp[4] && sp[4] == sp[5]){
        sp[3] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    else if(sp[6] != ' ' && sp[6] == sp[7] && sp[7] == sp[8]){
        sp[6] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    //vertical
    else if(sp[0] != ' ' && sp[0] == sp[3] && sp[3] == sp[6]){
        sp[0] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    else if(sp[1] != ' ' && sp[1] == sp[4] && sp[4] == sp[7]){
        sp[1] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    else if(sp[2] != ' ' && sp[2] == sp[5] && sp[5] == sp[8]){
        sp[2] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    //diagonal
    else if(sp[0] != ' ' && sp[0] == sp[4] && sp[4] == sp[8]){
        sp[0] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    else if(sp[2] != ' ' && sp[2] == sp[4] && sp[4] == sp[6]){
        sp[2] == p ? cout << "You WIN!\n" : cout << "You lose....\n";
    }
    else{
        return false;
    }
    return true;
}

bool cT(char *sp){
    for(int i = 0; i < 9; i++){
        if(sp[i] == ' '){
            return false;
        }
    }
    cout << "It's a tie!\n";
    return true;
}