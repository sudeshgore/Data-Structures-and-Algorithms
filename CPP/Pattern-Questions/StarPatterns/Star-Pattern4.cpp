#include<iostream>
using namespace std;

/*
    Pattern-5
        *****
        ****
        ***
        **
        *
*/
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Printing stars
        for (int j = 0; j <=n-i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    
}