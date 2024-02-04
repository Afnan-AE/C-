#include <iostream>
using namespace std;

string ct[][3] = {{"Bangladesh", "America", "Uk"},
                 {"India", "Japan", "Korea"},
                 {"Saudi Arab", "Russia", "France"}};

int r = sizeof(ct)/sizeof(ct[0]);
int c = sizeof(ct[0])/sizeof(ct[0][0]);

int main()
{
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << ct[i][j] << ' ';
        }
        cout << "\n";
    }
}