#include <iostream>
using namespace std;

void srt(int ar[], int size);

int main()
{
    int ar[] = {9, 0, 3, 4, 2, 5, 8, 6, 7, 1};
    int si = sizeof(ar)/sizeof(ar[0]);

    srt(ar, si);

    for(int el : ar)
    {
        cout << el << ' ';
    }

    return 0;
}

void srt(int ar[], int size)
{
    int tmp;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(ar[j] > ar[j + 1]){
                tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = tmp;
            }
        }
    }
}