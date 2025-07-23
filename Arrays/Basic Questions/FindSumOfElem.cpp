#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; // size of array
    cin >> n;
    int nums[n];
    // Taking input elements in array.
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (long)nums[i]; 
    }
    cout <<"Sum of elements in array: " << sum;
}