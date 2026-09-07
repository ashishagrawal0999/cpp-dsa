#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> vec1 ={1,2,3,4,5,6};

    vec1.clear();

    cout<<"is empty :"<<vec1.empty()<<endl;

    vector<int> vec2 ={1,2,3,4,5,6};
    cout<<"begin is "<<*(vec2.begin())<<endl;


    vector<int> :: iterator it = vec2.begin();

    // for(it = vect2.begin(); it!= vect2.end();it++){
    //     cout<< *(it) <<" ";
    // }

    // for(auto it = vect2.rbegin(); it != vect2.rend(); it++){
    //     cout<<*(it)<<endl;
    // }

    // for (auto it = vect.begin(); it != vect.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    while(it != vec2.end()){
        cout<<*(it)<<" ";
        it++;
    }

    return 0;
}