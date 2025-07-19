#include<iostream>
using namespace std;

int countDigits(int n){
    int digits = 0;
    while(n != 0){
        ++digits;
        n /=0;
    }
    return digits;
}

// We can use in-build function 'pow(number, power)' for optimization.
int findSum(int n, int digits){
    int ans = 0;
    while(n > 0){
        int sum = 1;
        for (int i = 0; i < digits; i++)
        {
            sum *= (n%10); 
        }
        ans += sum;
        n /= 10;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    
    int totalDigits = countDigits(n);
    int sum = findSum(n, totalDigits);
    
    if(sum== n){
        cout<<"Amstrong number!\n";
    }
    else {
        cout << "Not an amstrong number!\n";
    }
}