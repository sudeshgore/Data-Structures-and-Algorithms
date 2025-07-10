#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;

    if(year%4==0){
        if(year%100 == 0){
            cout << "Leap year!\n";
        }
        else if(year%400==0){
            cout <<"Not a leap year!\n ";
        }
    }
    else {
        cout << "Not a leap year1 \n";
    }
}