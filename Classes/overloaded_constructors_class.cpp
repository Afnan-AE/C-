#include <iostream>
using namespace std;

//overloaded constructor can help to construct objects even with different elements.


class p{
    public:
        string t;
        int qs;
    
    p(){
        cout << "This pizza has nothing.\n";
    }
    p(string t){
        cout << "This pizza has " << t << " and is full."<< '\n';
    }
    p(string t, int qs){
        cout << "This pizza has " << t << " and " << qs << " slices left."<< '\n';
    }
};

int main(){

    p p1("beef");
    p p2("chicken", 4);
    p p3();

    return 0;
}