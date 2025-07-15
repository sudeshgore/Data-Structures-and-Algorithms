#include<iostream>
#include<string.h>
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
    string str = "CountVowelsFromString";

    int count = 0;
    for (int  i = 0; i < str.length(); i++)
    {
       if(check) {
            count++;
       }
    }
    cout << "Number of vowels: " << count;
    
}