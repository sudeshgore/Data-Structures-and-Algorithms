#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Print sum of first 'n' natural numbers.
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum += i; // May overflow for large 'n' value. So, use long long for sum variable.
    }

    cout << "Sum of first n natural numbers: " << sum << endl;

    // 2nd approach for sum

    long long sum1 = 0;

    sum1 = n*(n+1)/2;  // formula for sum n natural number.
    cout << "Answer by second approach: " <<sum1 << "\n";
    
}