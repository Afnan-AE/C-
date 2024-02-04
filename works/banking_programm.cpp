#include <iostream>
using namespace std;

void sb(double b){
    cout << "Balance: " << b;
}
double dp(){
    double i = NULL;

    while(!(i > 0)){
        cout << "Enter amount to be deposited: "; 
        cin >> i;
    }
    
    return i;
}
double ws(){
    double i = NULL;

    while(!(i > 0)){
        cout << "Enter amount to be withdrawn: "; 
        cin >> i;
    }

    return i;
}

int main()
{
    int n = 0;
    double b = 0;

    do
    {
        cout << "Enter choice:" << endl;
        cout << "(1)Balance\n";
        cout << "(2)Deposit\n";
        cout << "(3)Withdraw\n";
        cout << "(4)Exit\n";
        cin >> n;

        switch (n)
        {
            case 1:
                sb(b);
                cout << endl;
                break;

            case 2:
                b += dp();
                sb(b);
                cout << endl;
                break;
            
            case 3:
                if(b <= 0){
                    cout << "Insufficient funds." << endl;
                }
                else{
                    b -= ws();
                }
                sb(b);
                cout << endl;
                break;

            case 4:
                cout << "Thanks for using the bank. ";
                cout << endl;
                break;

            default:
                cout << "Invalid choice. ";
                cout << endl;
                break;
        }
        
    } while (n != 4);

    return 0;
    
}