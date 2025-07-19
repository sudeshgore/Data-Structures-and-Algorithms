#include<iostream>
using namespace std;

char convert(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}

int main(){
    char ch;
    cin >> ch;
    char result = convert(ch);
    cout << result << "\n";
}