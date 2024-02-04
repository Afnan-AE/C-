//object is a kind of object which has attribute(characteristics)
// & methods(functions) 
// ex. human, robot, pc, book, keyboard

//to define objects we need class
// class are used to set characteristics and functions to objects

#include <iostream>
using namespace std;

class robot{
    public:
        string n;
        double cn;
        int a;
        bool ave;

        void in(){
            cout << "I am " << n << ".\n";
            cout << "My code number is " << cn << "\n";
            cout << "I am " << a << " years old.\n";
            
        }
        void walk(){
            cout << n << " robot is walking.\n";
            cout << '\n';
        }
        void work(){
            cout << n << " robot is working.\n";
            cout << '\n';
        }
        void func(){
            cout << "My Robotic Functions are currently (1 for available/0 for unavailable): " << ave << ".\n";
            cout << '\n';
        }

};

int main(){

    robot r1;
    robot r2;

    r1.n = "VR43";
    r1.cn = 56790.34;
    r1.a = 2;
    r1.ave = true;

    r2.n = "VA01";
    r2.cn = 011011.11;
    r2.a = 34;
    r2.ave = false;

    r1.in();
    r1.walk();
    r1.work();
    r1.func();
    cout << ' ' << '\n';
    r2.in();
    r2.walk();
    r2.work();
    r2.func();


    return 0;
}