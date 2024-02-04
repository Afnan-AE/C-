#include <iostream>
using namespace std;

/* by this we mean the inheritence of a class for other class
    *the class that inherits is child class
    *the class inherited from in parent class
*/

class r{
    public:
        int t = 10; //time
        double dc; //distance covered
        string cn = "Tekta";
};

class nr : public r{ //this a robot can walk in a uniform velocity
    public:
        int v;
    
    nr(int v){
        this->v = v;
        this->dc = v * t;
    }
    void s(){
        cout << "This robot is from " << cn << ".\n";
        cout << "In 10 secs, according to given velocity, Robot will traverse " << dc << " meters.\n";
    }
};

class nr2 : public r{ //this robot can walk and accelerate
    public:

        int a;

        nr2(int a){
            this->a = a;
            this->dc = (1/2.0) * a * t;
        }

        void s(){
            cout << "This robot is from " << cn << ".\n";
            cout << "In 10 secs, according to given acceleration, Robot will traverse " << dc << " meters.\n";
        }
};

int main(){

    nr r1(10);
    r1.s();

    nr2 r2(10);
    r2.s();
    
    return 0;
}