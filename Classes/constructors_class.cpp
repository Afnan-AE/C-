//constructors are special functions that are automatically
// initiated when a class is called to construct object.

#include <iostream>
using namespace std;

class r{
    public:
        string n;
        int y;
        char m;
        bool ave;

    r(string n, int y, bool ave, char m){
        this->n = n;
        this->y = y;
        this->ave = ave;
        this->m = m;
    }
    void in(){
        cout << "I am " << n << ".\n";
        cout << "My model is " << m << "\n";
        cout << "I am " << y << " years old.\n";
        cout << n << "'s functions; 1 for available/0 for not available: " << ave << '\n';
    }
};

int main(){

    r r1("VR35", 1, true, 'A');
    r r2("VA01", 10, false, 'Z');

    r1.in();
    cout << '\n';
    r2.in();

    return 0;
}