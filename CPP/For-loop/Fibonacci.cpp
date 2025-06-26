#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Print fibonacci number series.
    // int prev = 0, curr = 1, next = 0;
    // cout << prev << " " << curr << " ";
    // for (int i = 2; i < n; i++)
    // {
    //     next = prev + curr;
    //     cout << next << " ";
    //     prev = curr;
    //     curr = next;
    // }

    // Print nth fibonacci number.
    int prev = 0, curr = 1, next = 0;
    for (int i = 2; i < n; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << next << " ";
}