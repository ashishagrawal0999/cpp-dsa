#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec1 = {1,2,3,4,5,6};
    vector<int> vec2(vec1); // storing the values of vec1 in vec2
    
    for(int val: vec2){
        cout<<val<<" ";
    }

    cout<<endl;


    vector<int> vec3 ={20,30,40,50,60};

    // swap 

    vec2.swap(vec3);

    for(int val : vec3){
        cout<<val<<" ";
    }

    vec1.erase(vec1.begin() + 2);
    vec2.erase(vec2.begin()+1,vec2.begin()+3);
    vec2.insert(vec2.begin()+2,36);

    for(int val : vec1){
        cout<<val<<" ";

    }

    for(int val : vec2){
        cout<<val;
    }

    cout<<endl;

    cout<<"is empty "<<vec1.empty()<<endl;

    cout<<*(vec1.end()-1)<<endl;

   

    return 0;
}