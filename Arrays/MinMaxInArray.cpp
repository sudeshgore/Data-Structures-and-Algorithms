#include<bits/stdc++.h>
using namespace std;

int minElement(int nums[], int n){
    int minElem = nums[0];
    for (int i = 1; i < n; i++)
    {
        if(nums[i] < minElem){
            minElem = nums[i];
        }
    }
    return minElem;
}

int maxElement(int nums[], int n){
    int maxElem = nums[0];
    for (int i = 1; i < n; i++)
    {
        if(nums[i] > maxElem){
            maxElem = nums[i];
        }
    }
    return maxElem;
}

int main(){
    int n; // size of array
    cin >> n;
    int nums[n];
    // Taking input elements in array.
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    //1st method : Using for-loop. Time complexity- O(n). Space Complexity - O(1).
    // int minimum = minElement(nums, n);
    // int maximum = maxElement(nums, n);
    // cout << "Minimum element is " << minimum << " And " << "maximum element: " << maximum;

    // 2nd method : Using in-build function of C++ STL. Time complexity- O(n). Space Complexity - O(1).
    int maxi = *max_element(nums, nums+n); 
    int mini = *min_element(nums, nums+n);
    cout << "Minimum element is "<<mini<<" and Maximum element is "<<maxi << "\n";

}