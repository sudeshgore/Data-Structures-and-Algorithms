#include<bits/stdc++.h>
using namespace std;

void additionOfMatrix(int a[2][2], int b[2][2]){
    int c[2][2];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "[ ";
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout <<" ]";
        cout << "\n";
    }
}

int main (){
    int n = 2;
    int a[2][2] = {{1,2}, {3,4}};
    int b[2][2] = {{5,6}, {7,8}};

    additionOfMatrix(a, b);
}