#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if(num < 0){
        cout << "Number is negative!\n";
    }
    else if( num == 0) {
        cout << "Number is equal to zero!\n";
    }
    else {
        cout << "Number is positive!\n";
    }
}