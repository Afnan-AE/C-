//typedef = reserved keyword used to create an additional name (alias) for 
// a specific data type. It can be used as a new identifier for a data type
// and it also reduces typos. Use only when there is a clear benefit

// Updated: Replace with "using".

#include <iostream>
#include <vector>

using num_n = int;
typedef std::string text_t;



text_t name = "Evan";


int main(){

    using std::cout;

    num_n age = 16;

    cout << name << '\n';
    cout << age << '\n';


    return 0;
}

