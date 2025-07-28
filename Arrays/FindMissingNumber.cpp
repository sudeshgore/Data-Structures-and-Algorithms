#include<bits/stdc++.h>
using namespace std;

// 1 <= arr[i] <= n;

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    long sum = 0, sum2 = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum += arr[i];
    }
    sum2 = (n*(n+1)/2); 
    cout << sum2 - sum;
}