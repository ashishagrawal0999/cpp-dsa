#include<iostream>
using namespace std;
// const -> the value cannot be changed after the initialisation of the variable , function, object, means they are immutable 

// stored in read only memory for faster access time

int main(){

    const int x = 5;
    cout<<x<<endl;


    // 2.) const with pointers
    const int* a = new int(2); 
    cout << *a << endl;
    // *a = 2;         cant change content of pointer
    // cout << *a << endl;

    int b = 5;
    a = &b;
    cout << *a << endl;


    // const pointer, but not non-const data
    int *const a = 
    return 0;
}