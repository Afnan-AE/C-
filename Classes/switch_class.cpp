#include <iostream>
using namespace std;

int i;

int main(){

    cout << "This is for people, who graduated normally. " << '\n';
    cout << "Enter your age to identify your student life period: ";
    cin >> i;

    switch(i)
    {
        case 1 ... 3:
            cout << "You are still homeschooled. " ;
            break;

        case 4 ... 6:
            cout << "You are in kindergarden. ";
            break;

        case 7 ... 11:
            cout << "You are in primary class. ";
            break; 

        case 12:
            cout << "You are in class 6. ";
            break;
        
        case 13:
            cout << "You are in class 7. ";
            break;

        case 14:
            cout << "You are in class 8. ";
            break;
        case 15:
            cout << "You are in class 9. ";
            break;

        case 16:
            cout << "You are in class 10. ";
            break;

        case 17:
            cout << "Prepare for SSC. ";
            break;

        case 18 ... 19:
            cout << "You are in college. ";
            break;
        
        case 20 ... 25:
            cout << "You are in University. ";
            break;

        case 26 ... 149:
            cout << "Your student life has ended. ";
            break;
            
        case 150 ... 10000000:
            cout << "Are you immortal or did you failed too much? ";
            break;

        default:
            cout << "Please enter your age in numbers: ";                
    }

    return 0;
}