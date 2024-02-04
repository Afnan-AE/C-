#include <iostream>
using namespace std;

int main(){

    string fd[100000000];
    int sf = sizeof(fd)/sizeof(fd[0]);
    string tmp;

    for(int i = 0; i < sf; i++){
        cout << "Enter your fav foods('q' to exit)#" << i + 1 << ": ";
        getline(cin, tmp);
    
        if(tmp == "q")
        {
            break;
        }
        else{
            fd[i] = tmp;
        }
    }
    cout << "Your favorite foods are: \n";
    for(int i = 0; (!(fd[i].empty())); i++ ){
        cout << fd[i] << '\n';
    }

    return 0;
}