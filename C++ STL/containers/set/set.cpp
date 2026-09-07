#include<iostream>
#include<set>
using namespace std;

int main(){

    // Stores unique elements only
    // Stores data in sorted order
    // Duplicates are automatically removed
    // header file -> #include<set>
    // Ordered Set : Internally implemented as self balancing BST
    // T.C. -> O(logn) for all operations

    // Creation:

    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    // traverse 

    //1.) iterator

    set<int>::iterator it = s1.begin();
    while(it != s1.end()){
        cout<<*(it)<<endl;
        ++it;
    }

    // 2.) Range based for

    for(auto &val : s1){
        cout<<val<<" ";
    }


    s1.erase(s1.begin() , s1.begin()+2);
    s1.erase(s1.begin() , s1.end());

    cout << s1.size() << endl;
    s1.clear();
    cout << s1.size() << endl;

    if (s1.empty() == true){
        cout << "Set is empty";
    } else {
        cout << "Set is not empty";
    }


    if(s1.find(1) != s1.end()){
        cout<<"Element is found";
    } else {
        cout<<"Element not found";
    }


    if(s1.count(2) == 1){
        cout<<"2 is found";
    } else {
        cout<<"2 is not found";
    }











    // Unordered Set : implemented internally as hashtable , array like structure ko use krrha hota hai
    // T.C. -> O(1) for all operations
    // Creation

    // unordered_set<int> s1;
    // unordered_set<int>::iterator it = s1.begin();
    // while (it != s1.end()){
    //     cout << *(it) << endl;
    //     ++it;
    // }


    // // lowerbound
    // cout<<*(s.lower_bound(4))<<" is lowerbound"<<endl;
    
    // for( auto val : s){
    //     cout<<val<<" ";
    // }

    return 0;
}
