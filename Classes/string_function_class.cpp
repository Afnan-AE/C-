//string functions

#include <iostream>
#include <string>
using namespace std;

string i = "Bad man";

int main()
{
    cout << i.capacity(); // returns total capacity of string
    cout << i.size(); // returns size of string
    cout << i.length(); // returns length of string
    i.resize(6); cout << i;// returns string with resized size
    i.reserve(14); //(didn't understand)
    i.clear(); cout << i; // returns nothing
    i.empty(); cout << i.empty(); // return bool value 0 or 1
    cout << i.append(" is Monon Vai."); // adds string to the last
    i.push_back('a'); cout << i; //pushing back a charcter then returning
    i.assign(0, '#'); cout << i; // didn't understand
    i.insert(1,"@"); cout << i; // inserts character at desired point.
    i.erase(0,3); cout << i; // erases desired characters
    //i.swap(7); // didn't understand
    i.replace(0, 3, "Lad"); cout << i; // replace desired characters
    i.pop_back(); cout << i; //after function , executes resulted string.
    cout << i.at(0); //finds character at desired place.
    cout << i.back() << i.front(); // finds character at last and first place.
    cout << i.find("m");//identifies the place of character
    cout << i.find_first_not_of("j"); // find the character which is not in the string.
    
    return 0;
}