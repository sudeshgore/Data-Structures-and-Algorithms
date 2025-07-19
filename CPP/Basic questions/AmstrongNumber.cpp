#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int cnt = 0, temp = n, temp2= n,ans = 0;
    while(temp > 0){
        temp /= 10;
        ++cnt;
    }

    while(temp2 > 0){
        int sum = 1;
        for (int i = 0; i < cnt; i++)
        {
            sum *= (temp2%10); 
        }
        ans += sum;
        temp2 /= 10;
    }
    if(ans== n){
        cout<<"Amstrong number!\n";
    }
    else {
        cout << "Not an amstrong number!\n";
    }
}