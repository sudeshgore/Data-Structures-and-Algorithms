#include<iostream>
using namespace std;

int main(){
    int cel;
    cout << "Enter temperature in celcius: ";
    cin >> cel;

    int Fahrenheit = ((cel*9)/5) + 32;
    cout << "Temperature in Fahrenheit: " << Fahrenheit;
}