#include<bits/stdc++.h>
using namespace std;

// Printing the vector of pairs.
void printVec(vector<int> v){
    cout << "Size of vector: " << v.size() << endl;

    for(int i = 0; i < v.size(); i++ ){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main(){
    // Vector of pairs
    vector<pair<int, int>> v = {{1,2}, {2,3}, {4,5}};
    printVec(v);
    int n;
    cin >> n;
    for(int i= 0; i < n; i++){
        cin >> x >> y;
        v.push_back({x,y}); 
        // OR
        // v.push_back(make_pair(x,y)); 
    }
    printVec(v);
}