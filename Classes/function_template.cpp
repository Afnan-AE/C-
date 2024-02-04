#include <iostream>
using namespace std;

//template funtions help to return any type of data in a function.
// by using "template" we can use this function;
// beneath we have to use "typename " and give name a variable;
// the variable will be off multiple types the function will return the value in its natural state;

// to return or deduce naturally we should use "auto " type as return keyowrd;

template <typename T, typename U>
auto m(T x, U y){
    return (x > y) ? x : y;
}

int main(){

    cout << m(67, 67.5125) << '\n';

    return 0;
}

