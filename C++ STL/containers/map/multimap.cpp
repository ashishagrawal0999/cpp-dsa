#include<iostream>
#include<map>
using namespace std;

int main(){

    // insert and emplace is used to insert data 
    // [] is not allowed to insert data

    // erase() is used to erase data

    multimap<int,string> mm;
    mm.emplace(1,"apple");
    mm.emplace(1, "apple");
    mm.emplace(2, "mango");
    mm.emplace(2, "mango");
    mm.emplace(3, "banana");
    mm.emplace(4, "orange");

    for(auto entry : mm){
        cout<<entry.first<<" "<<entry.second<<" "<<endl;
    }

    mm.erase(1);

    for(auto entry : mm){
        cout<<entry.first<<" "<<entry.second<<" "<<endl;
    }
    cout<<endl;


    return 0;
}