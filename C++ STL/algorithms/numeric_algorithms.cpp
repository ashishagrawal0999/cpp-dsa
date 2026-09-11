#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;


int main(){
    vector<int> vec = {1,2,3,4,5,6};

    // accumulate : computes the sum of elements in a range
    // header file -> #include<numeric>
    // accumulate(range , initial value of accumulator)
    int ans = accumulate(vec.begin() , vec.end() , 0);
    cout<<ans<<endl;



    // inner_product() : computes the inner product of two range
    // range 1 : 1,2,3
    // range 2 : 4,5,6
    // inner_product : 1*4 + 2*5 + 3*6

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int> second;
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);

    int ans2 = inner_product(first.begin() , first.end() , second.begin() , 0);
    cout<<ans2<<endl;



    // partial_sum() : computes the partial sum of range
    // partial_sum(starting of range , ending of range , data structure to store partial sum like vector)

    vector<int> result(first.size());

    partial_sum(first.begin() , first.end() , result);
    for(int vals : result){
        cout<<vals<<" ";
    } 
    cout<<endl;



    // iota() : saari values me ek particular value add krdena

    // vector<int> three = {1,2,3,4,5};
    // iota(three.begin() , three.end() , 250);
    // for(int vals : three){
    //     cout<<vals<<" ";
    // }
    // cout<<endl;
      
}