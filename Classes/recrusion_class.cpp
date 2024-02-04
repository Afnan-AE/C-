#include <iostream>
using namespace std;


// recrusion = declaring the same function inside the  same function 

// pros
// will make the code easier
// helps in sorting algorithm

// cons
// takes more time
// uses up more memory

int f(int n);

int main(){
    cout << f(10);
    return 0;
}

int f(int n)
{
    if(n > 1){
        return n * f(n - 1);
    }
    else{
        return 1;
    }
}

// Example |i;