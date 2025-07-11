#include<iostream>
using namespace std;

int main(){
    int n, ans = 0, count = 0;
    cin >> n;
    int temp = n;

    if(n%10 == 0){
        while(temp>0){
            ++count;
            temp/=10;
            if(temp%10 != 0){
                break;
            }
        }
    }

    while(n > 0){
        ans = ans*10 + n%10;
        n/=10; 
    }
    if(count > 0){
        for (int i = 0; i < count; i++)
        {
            cout<< '0';
        }
        cout << ans << "\n";
    }
    else {
        cout << ans << "\n";
    }

}