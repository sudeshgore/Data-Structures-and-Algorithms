#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = 1;
    for(int i = 2; i <= n/2; i++){
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag) cout << "Given number is a prime number!\n";
    else cout << "Not a prime number\n";

}