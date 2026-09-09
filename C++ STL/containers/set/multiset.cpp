#include<iostream>
#include<set>
using namespace std;

int main(){

    // header file :  #include<set> 
    // we can also print duplicates
    // prints in ascending order : so there is implementation of upperbound and lowerbound

    // lowerbound -> returns an iterator pointing to the element which is equal to or greater than the given element
    // upperbound -> returns an iterator pointing to the element which is greater than the given element
    // operations T.C. :

    multiset<int> ms1; 

    ms1.insert(20);
    ms1.insert(30);
    ms1.insert(40);
    ms1.insert(50);
    ms1.insert(40);
    ms1.insert(30);


    multiset<int> :: iterator it = ms1.begin();

    while(it != ms1.end()){
        cout<< (*it)<< " ";
        ++it;
    }
    cout<<endl;

    cout<<"lowerbound is : "<< *(ms1.lower_bound(12)) <<endl;
    cout<<"upperbound is : "<< *(ms1.upper_bound(30)) <<endl;


    return 0;

}

