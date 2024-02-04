#include <iostream>
using namespace std;

/* sizeof = a function by which we can find out the 
            size of a: 
                variable 
                array
                data type
                object
                etc
*/

int a = 12;
string nm[] = {"Rakib", "Babul", "Bablu", "Adib"};
char gd[] = {'A', 'B', 'C', 'D', 'F'};

int main(){

    cout << sizeof(nm)/sizeof(string) << " elements" << endl;
    cout << sizeof(gd[3]) << endl;
    cout << sizeof(gd)/sizeof(char) << " elements" << endl;
    cout << sizeof(int);

    return 0;

}

/* 1 char variable = 1 byte 
   1 string variable = 32 bytes
   1 bool variable = 1 byte
   1 int variable = 4 bytes
   1 double variable = 5 byte*/