#include<bits/stdc++.h>
using namespace std;

// Find divisors of given number

// Time complexity - O(n)
void bruteForceApproach(int n){
    vector<int> divisors;
    for(int i = 1; i <= n; i++) if(n % i == 0) divisors.push_back(i);
    
    for(int i = 0; i < divisors.size(); i++){
        cout << divisors[i] << " ";
    }
    cout << endl;
}

// Time complexity - O(squrt(n))
void optimizedApproach(int n){
    vector<int> divisors;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            divisors.push_back(i);
            if(i != n/i){
                divisors.push_back(n/i);
            }
        }
    }
    for(int i = 0; i < divisors.size(); i++){
        cout << divisors[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 12;
   // bruteForceApproach(n); // output - 1 2 3 4 6 12
   // optimizedApproach(n); // output - 1 12 2 6 3 4
}