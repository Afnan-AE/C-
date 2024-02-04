#include <iostream>
using namespace std;

double p(double mp[], int sizemp);

int main(){
    
    double mp[] = {23.3, 34.5, 45.6, 67.4};
    int sizemp = sizeof(mp)/sizeof(double);

    cout << p(mp, sizemp);
    

    return 0;
}

double p(double mp[], int sizemp)
{
    double total = 0;
    for(int i = 0; i < sizemp; i++){
        total += mp[i];
    }

    return total;
}

