#include<iostream>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;

    int temp = n;

    while(temp > 0){
        ans = ans*10 + temp%10;
        temp/=10; 
    }

    if(ans== n) {
        cout << "Palindrome!\n";
    }
    
    else {
        cout << "Not a palindrome! Beecause ans is: " <<ans << "\n";
    }
}