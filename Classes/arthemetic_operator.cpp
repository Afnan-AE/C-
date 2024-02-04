#include <iostream>

int iy = 30;

double j = 23 + (7*0) + 14 - 49/7; // 1)parenthisis, 2)multiplication, 3)division, 4)substraction 5)addition //

using std::cout;

int main(){
    
    //addition

    iy+=1;
    iy = iy + 1;
    iy++;

    //substraction

    iy = iy - 1;
    iy-=1;
    iy--;

    //Multiplication
    iy = iy * 2;
    iy*=2;
    
    //division
    iy = iy / 2;
    iy/=2;
 
    
    // Modulas ( get remainder )

    int i = iy % 4;

    //printing
    
    cout << j << std::endl;
    cout << iy;
    cout << i << "\n";

    return 0;
}