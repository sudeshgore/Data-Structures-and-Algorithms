#include<iostream>
using namespace std;

/*
    Pattern 3 
        EEEEE
        DDDDD
        CCCCC
        BBBBB
        AAAAA
*/
int main(){
    char ch = 'E';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ch;
        }
        ch--;
        cout << "\n";
    } 
}