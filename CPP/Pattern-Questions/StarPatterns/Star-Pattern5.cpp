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
    for (int i = 0; i < n; i++)
    {
        // Printing spaces
        for (int k = 0; k < i; k++)
        {
            cout << "0 ";
        }
        // Printing stars
        for(int j = n; j >= i+1; j--){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    
}