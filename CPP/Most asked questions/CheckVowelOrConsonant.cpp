#include<iostream>
using namespace std;

bool check(char ch){
    char chrs[6] = {'a', 'e', 'i', 'o' , 'u'};
    for(int i = 0; i < 6; i++){
        if(ch == chrs[i]){
            return true;
        }
    }
    return false;
}

int main(){
    char ch;
    cin >> ch;
    if(check(ch)) {
        cout << "It is vowel\n"; 
    }
    else {
        cout << "It is not vowel\n";
    }
}