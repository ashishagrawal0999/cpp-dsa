#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<string> str  = {"Hello", "ji", "kaise", "ho", "saare"};

    // traverse using iterator
    vector<string> :: iterator it = str.begin();
    while(it != str.end()){
        cout<< *it << " ";
        ++it;
    }
    cout<<endl;


    vector<int> vec = {10,20,30,40,50,60};
    vector<int> :: iterator it2 = vec.begin();
    while(it2 != vec.end()){
        cout<< (*it2) << " ";
        ++it2;
    }
    cout<<endl;


    return 0;

}

