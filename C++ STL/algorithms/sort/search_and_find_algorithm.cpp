#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    // data sorted order me isiliye diye hai because binary search implement krna hai , monotonic

    // sabki T.C. Dekhni Hai
    // binary_search() : returns a bool value

    int target = 40;
    bool it = binary_search(vec.begin() , vec.end() , target);
    cout<< it <<endl;



    // lower_bound() : finds the first element greater than or equal to a target value in a sorted range
    // returns an iterator

    auto it2 = lower_bound(vec.begin() , vec.end() , 40);
    cout<< *it2 << endl;



    // upper_bound() : target element se badi element he milegi

    auto it3 = upper_bound(vec.begin() , vec.end() , 50);
    cout<< *it3 <<endl;



    // equal_range() : target element ke equal wali element ki range milegi

    auto it4 = equal_range(vec.begin() , vec.end() , 20);
    cout<< *it4 <<endl;

}