#include<iostream>
using namespace std;
/*
    Pattern 4
        EDCBA 
        EDCBA 
        EDCBA 
        EDCBA 
        EDCBA 
*/
int main(){
    char ch;
    for (int i = 0; i < 5; i++)
    {
        ch = 'E';
        for (int j = 0; j < 5; j++)
        {
            cout << ch;
            ch--;
        }
        cout << "\n";
    } 
}