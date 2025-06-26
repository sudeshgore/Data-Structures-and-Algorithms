#include<iostream>
using namespace std;

int main(){
    // "sizeOf" is used to get size of data types in bytes.
    cout << "Size of Integer data type: " << sizeof(int) <<" Bytes\n"; 
    cout << "Size of Long data type: " << sizeof(long) <<" Bytes\n"; // 8 bytes
    cout << "Size of Float data type: " << sizeof(float) <<" Bytes\n";
    cout << "Size of Double data type: " << sizeof(double) <<" Bytes\n"; 
    cout << "Size of Character data type: " << sizeof(char) <<" Bytes\n";
    cout << "Size of Short data type: " << sizeof(short) <<" Bytes\n"; 
    cout << "Size of Long Double data type: " << sizeof(long double) <<" Bytes\n";
    cout << "Size of Long Long data type: " << sizeof(long long) <<" Bytes\n";
}