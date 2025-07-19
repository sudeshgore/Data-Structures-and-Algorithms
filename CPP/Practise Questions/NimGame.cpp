#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n % 4 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;

    if(check(n)){
        cout << "Congratulations, You won the game!\n";
    }
    else {
        cout << "Sorry, your friend won the game!\n";
    }
}