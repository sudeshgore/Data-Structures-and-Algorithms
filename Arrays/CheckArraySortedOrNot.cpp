#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int n, int arr[]){
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            return false;
            
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool check = isArraySorted(n, arr);
    if (check)
    {
        cout << "Array is sorted!\n";
    }
    else {
        cout << "Array is not sorted!\n";
    }
}