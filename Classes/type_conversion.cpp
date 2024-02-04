// type conversion = conversion of data type 
/*2 types:
     1) Implicit = automatic.
     2) Explicit = proceed value with new data type. */



#include <iostream>


double j = (int)20.9;// this is an example of explicit.

char y = 63; // Accoring to ASCII table the value 63 represent character d.
//std::string f = (int)3; covertion of int to string will not work. // this is an example of implicit.

using std::cout;



int main(){
    
    cout << j << '\n';
    cout << y << '\n';


    return 0;
}