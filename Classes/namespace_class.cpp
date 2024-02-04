// Namespace = provides a solution for preventing name conflicts in larger projects. Each entity needs a unique name.
// a namespace allows for identically named entities as long as the namespaces are diffrent.

#include <iostream>

using std::string;

namespace first{
    string name = "Evan";
}

int main(){
    
    string name = "Nubaid";

    std::cout << name << " is younger than " << first::name << "." << '\n';

    return 0;    
}
