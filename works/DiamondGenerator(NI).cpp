#include <iostream>
using namespace std;

int ch(int i){
    return 3 - (i - 3);
}

int main(){
    int k = 0;
    int g = 0;

    for(int i = 1; i <= 5; i++){
        if(i > 3){
            g = ch(i);
            if(g % 2 != 0 || g == 1){
                for(int j = 1; j <= 5;j++){
                    if(j==3) cout << '*';
                    else if(j > 3) {
                        k = ch(j);
                        if(g > k) cout << '*';
                        else cout << '.';
                    }
                    else {
                        if(g > j) cout << '*';
                        else cout << '.';
                    }
                }
            }
            else if(g % 2 == 0){
                for(int j = 1; j <= 5;j++){
                    if(j==3) cout << '*';
                    else if(j > 3){ k = ch(j);
                        if(g <= k) cout << '*';
                        else cout << '.';
                    }
                    else {
                        if(g <= j) cout << '*';
                        else cout << '.';
                    }
                }
            }
            cout << '\n';
        }
        else{
            if(i % 2 != 0 || i == 1){
                for(int j = 1; j <= 5;j++){
                    if(j==3) cout << '*';
                    else if(j > 3) {
                        k = ch(j);
                        if(i > k) cout << '*';
                        else cout << '.';
                    }
                    else {
                        if(i > j) cout << '*';
                        else cout << '.';
                    }
                }
            }
            else if(i % 2 == 0){
                for(int j = 1; j <= 5;j++){
                    if(j==3) cout << '*';
                    else if(j > 3){ k = ch(j);
                        if(i <= k) cout << '*';
                        else cout << '.';
                    }
                    else {
                        if(i <= j) cout << '*';
                        else cout << '.';
                    }
                }
            }
            cout << '\n';
        }
    }
}