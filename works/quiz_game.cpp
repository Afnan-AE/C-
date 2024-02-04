#include <iostream>
using namespace std;

string q[] = {"1. Who bombed Nagasaki?: ",
              "2. When was C++ created?: ",
              "3. What is Sun?: ",
              "4. Which one is a name of a book?: "};

string op[][4] = {{"A. Hitler", "B. Putin", "C. Oppenheimer", "D. Hero Alam"},
                  {"A. 1969", "B. 1942", "C. 1971", "D. 1985"},
                  {"A. Star", "B. Sea", "C. Mobile", "D. Galaxy"},
                  {"A. Barbie", "B. Ikigai", "C. Fortnite", "D. Samsung A52s" }};

char ans[] = {'C', 'D', 'A', 'B'};

int sQ = sizeof(q)/sizeof(q[0]);
char g;
int score;

int main(){

    for(int i = 0; i < sQ; i++){
        cout << "*****************************\n";
        cout << q[i] << '\n';
        cout << "*****************************\n";
        for(int j = 0; j < sizeof(op)/sizeof(op[i]);j++){
            cout << op[i][j] << '\n';
            
        }

        cout << "Ans: "; cin >> g;

        g = toupper(g);

        if(g == ans[i]){
            cout << "Correct\n";
            score++;
        }
        else{
            cout << "Wrong\n";
        }
        cout << '\n';
    }

    cout << "*****************************\n";
    cout << "            RESULT           \n";
    cout << "*****************************\n";
    cout << "Number of questions: " << sQ << endl;
    cout << "Score: " << score << endl;
    cout << "Percentage: " << (double)score/(double)sQ*100 << "%\n";


    return 0;
}