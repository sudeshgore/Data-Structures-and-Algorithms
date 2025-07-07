#include<iostream>
using namespace std;
/*
    Pattern 5
        ABCDE
        FGHIJ
        KLMNO
        PQRST
        UVWXY
*/
int main(){
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ch++;
        }
        cout << "\n";
    }
}