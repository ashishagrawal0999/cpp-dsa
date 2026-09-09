#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>

using namespace std;

int main(){

    // normal pair -> a group of two values

    pair<int,int> p1 = {1,2};
    cout<<p1.first<<" "<<p1.second<<" ";

    pair<char,string> p2 = {'A' ,"Hello"};
    cout<<p2.first<<" "<<p2.second<<" ";


    // auto p = make_pair(10,"Hello");      // arguments ka type khud deduce krlega

    
    // pair of pair

    pair<int,pair<int,int>> p3 = {1,{1,2}};
    cout<<p3.first<<" "<<p3.second.first;

    pair<string,pair<int,string>> p4 = {"Hello",{1,"Ji"}};
    cout<<p4.first<<" "<<p4.second.first;


    //  vector of int -> just like we created vector of integers
    //  vector<int> vec = {1,2,3,4,5,6};


    // vector of pair
    vector<pair<int,int>> vp = {{1,2}, {2,3}, {3,4}, {4,5}};

    // vp.push_back({1,2});
    // vp.push_back({2,3});


    // har pair ko access krne ke liye hume use container me store krna hoga aur phir hum use print krskte hai
    // pair ko hum ek type ki tarah leskte hai jaise int ek type hai , vaise he pair ek type hai

    // Pair container nahi hai:
    // ❌ begin()
    // ❌ end()
    // ❌ size()
    // ❌ push_back()

    // Lekin vector<pair>
    // │
    // ├── begin / end
    // ├── iterator
    // ├── push_back
    // ├── emplace_back
    // └── loops

    // Distinction

    // pair<int,int> p
    //      ↓
    //   2 values
    //      ↓
    // ❌ no begin / end
    // ❌ no iterator

    //  Lekin:
    //  vector<pair<int,int>> vp
    //        ↓
    //      vector
    //        ↓
    // ✅ begin/end
    // ✅ iterator
    // ✅ range-based for
    // ✅ iterator-based for

    // isiliye vector iterator -> pair ko point krega , aur pair->first , pair-> second krke value access krskte hai
    // yehi cheez hum map me bhi krrhe the , map ka iterator entry ko point krrha tha aur voh entry ek pair he thi


    vector<pair<int, int>>::iterator it = vp.begin();

    while(it != vp.end()){
        cout<<it->first<<" "<<it->second<<" "<<endl;
        ++it;
    }


    // Range based for
    for(auto p : vp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    for (auto &p : vp){ // & lagane se pair ki unnecessary copy avoid hoti hai.
        cout << p.first << " " << p.second << endl;
    }


    // Iterator based for
    for(auto it = vp.begin(); it != vp.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }



    // vector of pair of pair
    vector<pair<int,pair<int,int>>>  vpp = {{1,{2,3}} , {2,{3,4}} , {3,{4,5}}};
    for(auto &p : vpp){
        cout<<p.first<<endl;
        cout<<p.second.first<<endl;
        cout<<p.second.second<<endl;
    }



    // swap() -> pair ka type same hona chahiye
    pair<int,int> p5 = {1,2};
    pair<int,int> p6 = {3,4};

    p5.swap(p6);        // yaa swap(p1,p2)
    cout<<p5.first<<" "<<p5.second<<endl;



    // operators -> == , != , < , > , <= , >=
    // Comparison lexicographical hota hai
    // Pehle first compare hota hai , phir second
    cout<< (p5 != p6) << " ";



    // pushing a pair in vector -> isme iterator me push krna hai yaa pair me , mtlb pair ke name me
    vp.push_back({1, 2});
    // parethesis is required because it assumes that we have created a pair during the pushback
    // it cannot covert value into pairs

    vp.emplace_back(4,5);
    // in-place objects create , it can convert value into pair , no parenthisis is required

    return 0;
}










