#include<bits/stdc++.h>
using namespace std;

// Convert Decimal number into binary.
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    if(n==0) {
        cout << n;
    }
    else {
        while(n > 0){
        int rem = n%2;
        arr.push_back(rem);
        n /= 2;
        }
        reverse(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
           cout<<arr[i];
        }
    }  
}