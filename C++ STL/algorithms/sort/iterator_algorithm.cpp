#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



void printDouble(int a){
    cout << 2 * a << " ";
}

bool checkEven(int a){
    return a%2 == 0;       
}



int main(){

    // C++ STL includes a wide range of algorithms that operate on various container types (such as vectors , lists , sets and maps) and provide essential functionality for data manipulation 

    // These algorithms are defined in the <algorithm> header and are a part of the STL's core functionality

    vector<int> vec = {11,12,4,5,3,2,1,5,6,7,9,8,4,6,3,2};


    // for_each() :
    // container ke andar kuchh range of elements pe ek function apply krne ke liye we use for_each()
    for_each(vec.begin() , vec.end() , printDouble);



    // find() : ek specific range deskte hai aur target jo hume find krna hai
    // returns an iterator
    // if found returns value , else return 0

    int target = 12;
    vector<int>::iterator it = find(vec.begin() , vec.end() , target);     
    // auto bhi krskte hai
    cout<<*(it)<<endl;



    // find_if() :
    // specific criteria ke according find krna hai 
    // ek function define krenge jo ki find krne ka criteria hoga
    auto it2 = find_if(vec.begin() , vec.end() , checkEven);
    cout << *(it2) << endl;



    // count() : find the occourence of an element
    int target2 = 11;
    int ans = count(vec.begin() , vec.end() , target2);
    cout<<ans<<endl;



    // count_if : count krdega ek range me based on some criteria
   // criteria hum function ke through define krenge
    int ans2 = count_if(vec.begin() , vec.end() , checkEven);
    cout<<ans2<<endl;



    // sort : sort the elements in a range in ascending order
    sort(vec.begin() , vec.end());
    for(int vals : vec){
        cout<<vals<<" ";
    }
    cout<<endl;

    // for descending order sort
    // sort(vec.begin(),vec.end(),greater<int>());
    // for (int vals : vec){
    //     cout << vals << " ";
    // }

    

    // rotate() : rotates element in a range
    // ex: 10,20,30,40,50
 
    // rotate by 3 places 
    // 40,50,10,20,30

    // rotate(starting of range , index jaha se rotate krna hai , ending of range)
    rotate(vec.begin() , vec.begin() + 3 , vec.end());
    for(int vals : vec){
        cout<<vals<<" ";
    }
    cout<<endl;



    // reverse() : reverse the order of elements
    reverse(vec.begin(), vec.end());
    for (int vals : vec){
        cout << vals << " ";
    }
    cout<<endl;



    // unique() : sorted range se duplicate hata dega
    // returns an iterator 
    auto it3 = unique(vec.begin() , vec.end());
    // yaha iterator milne ke baad print kaise kre becaue it me unique ki range hai , aur range based for me hum iterator nhi dete , aur it hum yaa toh begin yaa find yaa end se dete hai par hum isme function derhe jisme begin aur end dono hai

    vec.erase(it3,vec.end());
    for(int vals : vec){
        cout<<vals<<" ";
    }
    cout<<endl;



    // partition() : divides element in a range in two groups based on a predicate
    // returns an iterator
    // yaha pe bhi doubt hai jo unique ke liye tha


    return 0;

}