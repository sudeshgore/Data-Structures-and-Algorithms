#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long num = 1;
    for (long i = 1; i <= n; i++)
    {
        num *= i;
    }
    cout << num;
    
}