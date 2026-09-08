#include<iostream>
#include<vector>
using namespace std;

int main(){

    // creation
    vector<int> vec;

    // vector<int> vec = {1,2,3,4};

    // vector<int> vec(3,0);
    // size -> 3 , value at every index is 0

    // vector<int> vec(10);  // size is 10
    // vec[0] = 2;


    cout<<vec.max_size()<<" ";
    vec.reserve(10);


    // insertion
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.pop_back();

    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;


    vec.insert(vec.begin() + 2, 50);

    vec.insert(vec.begin() + 3, 36);

    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;


    cout<<"value at index 2 is :"<<vec.at(2)<<" or "<<vec[2]<<endl;
    cout<<"at front : "<<vec.front()<<" "<<"at back : "<<vec.back()<<endl;

    return 0;
}
