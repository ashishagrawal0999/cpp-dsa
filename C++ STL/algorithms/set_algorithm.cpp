#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vector<int> vec2;
    vec2.push_back(5);
    vec2.push_back(6);
    vec2.push_back(7);
    vec2.push_back(8);
    vec2.push_back(8);

    // yaha output me 8 baar kyo aarha union krne ke baad ??

    // set_union : computes union of two sorted range
    // 1,2,3,4,5,6,7,8
    // agar koi duplicate hoga toh set me khud remove hojaayega


    vector<int> result;
    set_union(vec.begin(), vec.end(), vec2.begin(), vec2.end(), inserter(result , result.begin()));

    for(int vals : result){
        cout<<vals<<" ";
    }
    cout<<endl;




    vector<int> result2;
    // set_intersection : intersection of two sorted range
    set_intersection(vec.begin(), vec.end(), vec2.begin(), vec2.end(), inserter(result2, result2.begin()));

    for (int vals : result2){
        cout << vals << " ";
    }
    cout << endl;




    vector<int> result3;
    // set_difference : difference between two sorted ranges
    set_difference(vec.begin(), vec.end(), vec2.begin(), vec2.end(), inserter(result3, result3.begin()));

    for(int vals : result3){
        cout<<vals<<" ";
    }
    cout<<endl;

    // intersection aur difference aur symmetric difference kb use kre

    // inserter()

    // set_symmetric_difference : computes the symmetric difference of two sorted ranges
    // dono range me jo same element hai voh remove hojaayenge
    // 1,2 3,4
    // 3,4,5,6
    // set_symmetric_difference : 1,2,5,6

    vector<int> result4;
    set_symmetric_difference(vec.begin(), vec.end(), vec2.begin(), vec2.end(), inserter(result4, result4.begin()));

    for(int vals : result4){
        cout<<vals<<" ";
    }
    cout<<endl;



    return 0;
}
