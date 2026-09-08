#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec ={1,2,3,4,5,6};
    cout<<"begin is "<< *(vec.begin()) <<endl;


    vector<int> :: iterator it = vec.begin();
    for(it = vec.begin(); it!= vec.end(); ++it){
        cout<< *(it) <<" ";
    }
    cout<<endl;


    for(auto it = vec.rbegin(); it != vec.rend(); ++it){
        cout<< *(it) <<" ";
    }
    cout<<endl;


    for (auto it = vec.begin(); it != vec.end(); ++it){
        cout << *(it) <<" ";
    }
    cout<<endl;

    // agar same iterator ko multiple jagah use krna hai toh iterator ke value reset krni hogi yaa toh dusra iterator banana hoga
    
    vector<int> :: iterator it2 = vec.begin();
    while(it2 != vec.end()){
        cout<< *(it2) <<" ";
        ++it2;
    }

    return 0;
}
