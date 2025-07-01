#include<bits/stdc++.h>
using namespace std;

// Convert binary to decimal number
int main(){
    int binary,base = 1, decimal=0;
    cin >> binary;
    if(binary==0) {
        cout << binary;
    }
    else {
        while(binary > 0){
            int lastDigit = binary%10;
            decimal += lastDigit* base;
            base *= 2;
            binary /= 10; 
        }
        cout << decimal; 
    }
}