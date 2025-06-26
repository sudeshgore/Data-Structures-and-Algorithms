#include<iostream>
using namespace std;

int main(){
    long long n, pow;
    cin >> n >> pow;
    long long num = n;
    for (long i = 1; i < pow; i++)
    {
        num *= n;
    }

    cout << num << endl;
}