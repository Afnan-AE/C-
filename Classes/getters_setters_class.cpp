#include <iostream>
using namespace std;

//by using getter and setter we can access inaccessible values.


class s{
    private: //inaccesible
        int t = 0;

    
    public:
        s(int t){
        tp(t);
        }

        int tp(){ // getter which makes values accesible + readable
            return t;
        }

        void tp(int t){ // setter which makes values accesible + writable
            if(t < 0){
                this->t = 0;
            }
            else if(t >= 20){
                this->t = 20;
            }
            else{
                this->t = t;
            }
            
        }
};
int main(){

    s st(34);

    

    cout << "The temperature is " << st.tp();

    return 0;
}