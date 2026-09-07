#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string,int> m;
    m.emplace("tv",27);
    m.emplace("tv",27);
    m.emplace("tv",27);
    m.emplace("tv",27);

    // m.erase("tv");         to delete all instances of tv
    
    m.erase(m.find("tv")); // to delete single instance of tv using iterator

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;

}
