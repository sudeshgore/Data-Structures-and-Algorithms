#include<bits/stdc++.h>
using namespace std;

int findGCD(int a,int b){
    int minimum = min(a, b);
    while(minimum > 0){
        if(a % minimum == 0 && b % minimum == 0){
            break;
        }
        --minimum;
    } 
    return minimum;
}

int main(){
    int a, b;
    cin >> a >> b;
    int ans = findGCD(a,b);
    cout << findGCD(a,b) << "\n";
}