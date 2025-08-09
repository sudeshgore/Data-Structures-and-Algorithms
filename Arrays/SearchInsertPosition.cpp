#include<bits/stdc++.h>
using namespace std;
// Q. Search index of given element in the sorted array.

int searchInsertIndex(int n, int arr[], int element){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    
}

int main(){
    int n, element; 
    cin >> n >> element;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int indexOfElem = searchInsertIndex(n, arr, element);
    cout << "Position of element is at index: " << indexOfElem;
}