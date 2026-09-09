#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector provides : random access iterators 

    vector<int> vec1 = {1,2,3,4,5,6,7,8,9};
    vector<int> vec2(vec1);                 // storing the values of vec1 in vec2
    for(int val: vec2){
        cout<<val<<" ";
    }
    cout<<endl;


    vector<int> vec3 ={20,30,40,50,60,70,80};

    // swap()
    vec2.swap(vec3);
    for(int val : vec3){
        cout<<val<<" ";
    }
    cout<<endl;


    // erase() :
    vec1.erase(vec1.begin() + 2);               // 3 is removed (value at 2nd index)
    for (int val : vec1){
        cout << val << " ";                     // 1,2,4,5,6,7,8,9
    }
    cout << endl;


    vec2.erase(vec2.begin()+1,vec2.begin()+3);     // 30 , 40 is removed (value from index 1 to index 2) , erase me jo range hoti hai voh ending range ke -1 tk erase krti hai
    for(int val : vec2){
        cout<<val<<" ";
    }
    cout << endl;


    // clear() :
    vec2.clear();
    for(int vals : vec2){
        cout<<vals<<" ";
    }
    cout<<endl;

    // empty() : returns 1 if empty else returns 0
    cout << "is empty " << vec2.empty() << endl;

    cout << *(vec1.end() - 1) << endl;


    return 0;
}
