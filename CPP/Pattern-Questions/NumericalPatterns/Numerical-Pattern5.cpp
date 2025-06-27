#include<iostream>
using namespace std;
/*
    1 2 3 4 5 
    2 3 4 5 6
    3 4 5 6 7
    4 5 6 7 8
    5 6 7 8 9
*/
int main(){
    int k = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i+j << " ";
        }
        cout << "\n";
    }
}