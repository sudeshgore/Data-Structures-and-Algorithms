#include<bits/stdc++.h>
using namespace std;

int bishopMoves(int a, int b){
    int count = 0;
     count+= min(8-a, 8-b); // bishop moving towards down right diagonally
     count+= min(8-a,b-1); // bishop moving towards down left diagonally
     count+= min(a-1, b-1); // bishop moving towards up left diagonally
     count+= min(a-1, 8-b); // bishop moving towards up right diagonally

     return count;
}

int main(){
    int a, b; // Current Position of bishop, considering 8x8 Chess board.
    cin >> a >> b;
    int totalMoves = bishopMoves(a, b);
    cout << totalMoves << "\n";
}