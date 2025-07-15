#include<iostream>
#include<cstring>
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
    string str;
    cin >> str;

    int count = 0;
    for (int  i = 0; i < str[i] != '\0'; i++)
    {
        /* code */
    }
    
}