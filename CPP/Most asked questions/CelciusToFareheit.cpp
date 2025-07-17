#include<iostream>
using namespace std;

int main(){
    int temp;
    cout << "Enter temperature in celcius: ";
    cin >> temp;

    int Fahrenheit = ((temp*9)/5) + 32;
    cout << "Temperature in Fahrenheit: " << Fahrenheit;
}