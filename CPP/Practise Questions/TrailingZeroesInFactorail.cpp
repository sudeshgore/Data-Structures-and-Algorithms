#include<iostream>
using namespace std;

// dividing number by 5 until number is greater than equal to 5.
// Eg.- 10! =3628800 ==> 10/5 = 2. (two trailing zeroes) 
int trailingZeroes(int n){
    int count = 0;
    while(n >= 5){
        count += n/5;
        n/= 5;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int ans = trailingZeroes(n);
    cout << ans << "\n";
}