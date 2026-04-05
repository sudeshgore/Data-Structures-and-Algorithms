#include<bits/stdc++.h>
using namespace std;

// To print vector
void printVec(vector<int> v){
    cout << "Size of vector: " << v.size() << endl;

    for(int i = 0; i < v.size(); i++ ){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    // Vector is similar like arrays but have dynamic size(size can change)
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> n;
        v.push_back(n); // this will push the element at the end of the vector & have O(1) TC.
    }
    printVec(v);
    // Copying in vector is easy in O(n) Tc because it is copying one by one (internally similar like  using for loop)
    vector<int> v2 = v;


}