#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector provides : random access iterators
    // 5.) Random Access Iterator
    //     Read + Write
    //     ++ and --
    //     Jump directly: +, -, [], etc.

    vector<int> vec = {10,20,30,40,50};
    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);
    // 10,20,30,40

    vector<int> :: iterator it = vec.begin();
    while(it != vec.end()){
        *it = *it + 2;                          // write
        cout << (*it) << " ";                   // read
        ++it;                                   // forward
    }
    cout<<endl;


    // vector<int> :: iterator it2 = vec.end() - 1;
    // isse begin me jo element hai voh print nhi hoga isiliye , it2 = vec.end() se initialise krenge

    vector<int> :: iterator it2 = vec.end();
    while(it2 != vec.begin()){
        // pehle peeche jaaunga                         // yeh samajhna hai list aur vector me
        --it2;
        // phir print krunga
        cout << *it2 << " ";
    }
    cout<<endl;


    // randomly accessing elements
    vector<int> :: iterator it3 = vec.begin() + 2;              // at index 2 , vec.begin() is 0th index + 2  =  2
    cout<<"Value at vec.begin() + 3 is : "<< *it3 << endl;
    return 0;
}
