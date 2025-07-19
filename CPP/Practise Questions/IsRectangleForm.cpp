#include<iostream>
using namespace std;

bool isRectanglePossible(int a, int b, int c, int d){
    if((a== b && c == d) || (a == c && b == d) ||( a == d && b == c)) {
        return 1;
    }
    return 0;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool check = isRectanglePossible(a,b,c,d);
    if(check){
        cout << "Rectangle possible!\n";
    }
    else {
        cout << "Rectangle not possible\n";
    }
}