// const = a constant makes a variable read-only or not changable.

#include <iostream>

int main(){
    const std::string EVAn = "useless"; // this is also not changable further.

    int BIRTH = 2007; //it will not be changable further because the variable name was written in upper.

    std::cout << EVAn << " was born on " << BIRTH << ".";

    return 0;
}