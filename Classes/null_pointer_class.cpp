#include <iostream>
using namespace std;\

//null pointer = a pointer with no memory address at all
// nullptr is the syntax or to declare a pointer null
// not following normal rules of pointer declaration will cause error
// null pointer helps in indetifying wether a pointer has a memory address or not

int main()
{   
    int *px = nullptr;
    int x = 123;

    //px = &x;

     if(px == nullptr){
        cout << "Memory not found\n";   //DONT DEREFERENCE!!
     }
     else{
        cout << "Memory inserted.\n";
        cout << "Memory: " << *px;
     }

    return 0;
}

