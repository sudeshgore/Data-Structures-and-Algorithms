#include<iostream>
using namespace std;

bool leapYear(int year){
    if(year%4==0){
        if(year % 100 == 0){
            return year % 400 == 0;
        }
        return true;
    }
    return false;
}
int main(){
    int year;
    cin >> year;

    bool checkLeapYear = leapYear(year);
    if(checkLeapYear){
        cout << "Leap year!\n";
    }
    else {
        cout << "Not a leap year1 \n";
    }
}