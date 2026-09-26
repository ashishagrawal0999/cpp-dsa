#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Abstraction in header files
// 1.) functions implementation is hidden in header files

// sort ki implementation is hidden
// sort() is interface which is given by header file so that user can use it

// 2.) benefit is that twe could use the same program without knowing its inside working

// ex.) sort() , we know sort() is used to sort an array, list, collection of items, but we dont know which sorting algorithm it is using

// when we make a data member private and use getter setter to access and set its value that is also abstraction

int main(){
    vector<int> vec = {4,5,6,7,2,3,4,8,9};
    sort(vec.begin() , vec.end());

    for(int vals : vec){
        cout<<vals<<" ";
    }

    cout<<endl;

    return 0;
}

