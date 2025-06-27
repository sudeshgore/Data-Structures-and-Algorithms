#include<iostream>
using namespace std;

/*
    Pattern-3
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
        // Printing spaces
        for (int k = 1; k <= n-i; k++)
        {
            cout << "  ";
        }
        // Printing stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    
}