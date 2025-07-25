#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n){
    // Iterative method
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    int secondLarge = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > secondLarge && arr[i] < large){
            secondLarge = arr[i];
        }
    }
     return secondLarge;   
}

int findSecondSmallest(int arr[], int n){
        // Iterative method
     int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int secondSmallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > secondSmallest && arr[i] < smallest){
            secondSmallest = arr[i];
        }
    }
     return secondSmallest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int secondLarge = findSecondLargest(arr, n);
    int secondSmall = findSecondSmallest(arr, n);

    cout << "Second largest: " << secondLarge << " and Second smallest: " << secondSmall;
}