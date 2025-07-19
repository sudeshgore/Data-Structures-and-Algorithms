#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    // Uisng In-build function in C++.
    // cout << "Before swap: " << a << " " << b << "\n";
    // swap(a,b); 
    // cout << "After swap: " << a << " " << b;



    // Without using in-biuld function
    cout << "Before swap: " << a << " " << b << "\n";
    int temp = b;
    b = a;
    a = temp;
    cout << "After swap: " << a << " " << b;
}