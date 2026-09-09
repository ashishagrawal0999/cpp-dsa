#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    // header file :  #include<unordered_set> 
    // it gives unique values 
    // prints in random order : doesnt follow any sequence , thats why there is no implementation of lowerbound and upperbound

    // operations T.C. : 
    

    unordered_set<int> us1;


    us1.insert(20);
    us1.insert(30);
    us1.insert(40);
    us1.insert(50);
    us1.insert(40);
    us1.insert(30);


    unordered_set<int> :: iterator it = us1.begin();

    while(it != us1.end()){
        cout<< (*it)<< " ";
        ++it;
    }
    cout<<endl;


    return 0;

}
