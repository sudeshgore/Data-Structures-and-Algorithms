#include<bits/stdc++.h>
using namespace std;

int twoSum(int n, int k, int arr[]){
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( (arr[i] + arr[j]) == k ){
                count++;
            }
        }   
    }
    return count;
}

int main (){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << twoSum(n, k, arr);
    
}