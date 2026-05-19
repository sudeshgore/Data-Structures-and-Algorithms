#include<bits/stdc++.h>
using namespace std;

// CSES Problem

int main(){
    int n, x; // no. of childrens and each gondola capacity
    cin >> n >> x;

    int arr[n]; // childrens weight
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 0, l = 0, r = n-1;
    while(l<=r){
        if(arr[l] + arr[r] <= x){
            ans++;
            l++;
            r--;
        }
        else {
            ans++;
            r--;
        }
    }
    cout << ans << "\n";
}