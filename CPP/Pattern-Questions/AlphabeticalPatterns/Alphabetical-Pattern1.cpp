#include<iostream>
using namespace std;
/*
    Pattern - 1
        AAAAA
        BBBBB
        CCCCC
        DDDDD
        EEEEE
*/
int main(){
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ch;
        }
        ch += 1;
        cout<<"\n";
    }
}