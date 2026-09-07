#include<iostream>
#include<set>

using namespace std;
int main(){

    multiset<int> m;
    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);

    m.insert(1);
    m.insert(2);
    m.insert(3);

    for(int vals : m){
        cout<<vals<<" ";

    }

    cout<<endl;

    cout<<"size is "<<m.size()<<endl;

    return 0;


}