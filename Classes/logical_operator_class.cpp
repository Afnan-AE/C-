//logical operator = only execute code if conditions are true.
/*3 types: 
        1.&& = executes code if both conditions are true
        2.|| = executes code if one of the conditions are true.
        3.! = inverses the conditional equation of the code. */

#include <iostream>
using namespace std;


int temp;
bool sunny = false;

int main()
{
    cout << "Enter the temperature: "; cin >> temp;
    if(temp <= 10 || temp >= 40)
    {
        cout << "The temperature is bad today. " << endl;
    }
    else{
        cout << "The temperature is good today. " << endl;
    }

    if(!sunny)
    {
        cout << "The weather is cloudy. " << endl; // as by using the ! the conditon has been converted to true.
    }
    else
    {
        cout << "The weather is sunny. " << endl;
    }
    return 0;
}