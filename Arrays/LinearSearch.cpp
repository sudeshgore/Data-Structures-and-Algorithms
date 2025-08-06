#include<bits/stdc++.h>
using namespace std;

bool searchElement(int n, int x ,int arr[]){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool check = searchElement(n, x, arr);
    if (check)
    {
        cout << "Element found!\n";
    }
    else{
        cout << "Element not found!\n";
    }
}