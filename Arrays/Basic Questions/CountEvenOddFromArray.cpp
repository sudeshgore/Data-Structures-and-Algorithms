#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, evenNums = 0, oddNums = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Checking each element for even or odd.
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0){
            evenNums++;
        }
        else {
            oddNums++;
        }
    }
    cout << "Total even numbers: " << evenNums << " and total odd numbers: " << oddNums;
    
}