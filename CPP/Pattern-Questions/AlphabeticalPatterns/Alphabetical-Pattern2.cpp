#include<iostream>
using namespace std;

/*
    Pattern 2
        ABCDE
        ABCDE
        ABCDE
        ABCDE
        ABCDE
*/
int main(){
    char ch;
    for (int i = 0; i < 5; i++)
    {
        ch = 'A';
        for (int j = 0; j < 5; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << "\n";
    }
    
}