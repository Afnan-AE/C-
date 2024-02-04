#include <iostream>
using namespace std;

//dynamic memory = memory allocated after running or compiling code;
// normally memory aren't allocated after running code;
// we can use dynamic memory to dodge this problem;
// by using dynamic memory we can make the user give input
//                *more fexibly
//                *more vastly

//by using the new operator we the allocate the memory in the heap 
// rather than the stack

int main(){
    char *g;
    int s;
    cout << "Enter the amount of grades: "; cin >> s; cout << endl;
    g = new char;
    *g = g[s];
    
    for(int i = 0; i < s; i++){
        cout << "Grade#"<< i + 1 << ": ";
        cin >> g[i];
    }
    cout << "The grades: ";
    for(int i = 0;i < s; i++){
        cout << g[i] << ',';
    }


    return 0;
}

// for example, the size of array is always in the heap. We can't get a input for it.
// but due to dynamic memory we can access the heap and the inputting the size.
// to restrict the access to a certain limit after the use of the dynamic memory.
// we should delete it.