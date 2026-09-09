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

    // set generally Bidirectional Iterator provide karta hai

    // creation:

    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    // traverse :

    set<int>::iterator it = s1.begin();
    while(it != s1.end()){
        cout<<*(it)<<" ";
        ++it;
    }
    cout<<endl;

    // 2.) Range based for
    for(auto &val : s1){
        cout<<val<<" ";
    }
    cout<<endl;


    if (s1.empty() == true){
        cout << "Set is empty"<<endl;
    } else {
        cout << "Set is not empty"<<endl;
    }


    // find() returns an iterator
    // find krke , element print krskte hai
    // but set me index se element access nhi krskte

    auto it2 = s1.find(3);
    if(it2 != s1.end()){
        cout<<"Element is found ";
        cout<< *it2 << endl;
    } else {
        cout<<"Element not found"<<endl;
    }


    if(s1.count(2) == 1){
        cout<<"2 is found"<<endl;
    } else {
        cout<<"2 is not found"<<endl;
    }
    

    s1.erase(s1.begin(), s1.end());

    cout << s1.size() << endl;
    s1.clear();
    cout << s1.size() << endl;

    return 0;
}
