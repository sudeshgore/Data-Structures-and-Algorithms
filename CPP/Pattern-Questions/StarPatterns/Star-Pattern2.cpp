#include<iostream>
using namespace std;

/*
    Pattern-2
    *
    **
    ***
    ****
    *****
*/

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    
}