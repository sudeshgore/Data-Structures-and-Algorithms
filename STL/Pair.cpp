#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int , string> p;
    // Declaration of pair
    // p = make_pair(2, "abc");
    // another decalration od pair
    p = {3, "abcd"};
    // copying 'p' into 'p1' using reference of p
    pair<int, string> &p1 = p;

    cout << p1.first << " " << p1.second << endl;

    // Pair usage 
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);

    
}