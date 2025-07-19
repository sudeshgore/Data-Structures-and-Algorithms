#include<iostream>
using namespace std;

#define PI 3.14

int main(){  
    int radius;
    cin >> radius;

    double area = (double)(PI*radius*radius);
    cout <<"Area of circle: " << area << "\n";
}