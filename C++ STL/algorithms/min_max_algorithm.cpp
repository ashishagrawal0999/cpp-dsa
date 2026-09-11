#include<iostream>
using namespace std;
int main(){

    // min and max for two values
    // min() and max() :

    int a = 10;
    int b = 20;

    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;

    // min and max in a range
    // min_element() and max_element() :
    // returns an iterator

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    auto it = min_element(vec.begin() , vec.end());
    cout<< *it << endl;

    auto it2 = max_element(vec.begin() , vec.end());
    cout<< *it2 <<endl;
}

