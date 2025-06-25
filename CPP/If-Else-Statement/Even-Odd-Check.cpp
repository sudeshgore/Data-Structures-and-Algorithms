#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter your number\n";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "Yes, given number is even number\n";
    }
    else {
        cout << "No, given number is odd number\n";
    }
}