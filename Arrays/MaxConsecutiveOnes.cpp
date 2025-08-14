#include<bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &arr){
    int maxCount = 0, count = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i-1] == arr[i] && arr[i] == 1 ){
            count++;
        }
        else {
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    maxCount = max(maxCount, count);
    return maxCount;
}

int main(){
    vector<int> arr =  {0, 1, 0, 1, 1, 1, 1};
    int ans = maxConsecutive(arr);
    cout << ans;
}