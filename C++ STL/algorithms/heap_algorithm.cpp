#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    vec.push_back(22);
    vec.push_back(44);
    vec.push_back(33);
    vec.push_back(11);
    vec.push_back(55);

    // make_heap() : makes a max-heap
    // T.C. -> O(n)

    make_heap(vec.begin() , vec.end());
    for(int vals : vec){
        cout<<vals<<" ";
    }
    cout<<endl;

    // 55 44 33 11 22
    // isme ouput me 11 pehle aur 22 baad me kyo aarha

    // push_heap : heap me elements push krna
    // agar heap bana hua hai aur element vector me insert krna hai toh insert krne ke baad heap me push krna hoga
    // T.C. -> O(logn)

    vec.push_back(66);
    push_heap(vec.begin() , vec.end());     // iss range me push krna hai
    for(int vals : vec){
        cout<<vals<<" ";
    }
    cout<<endl;

    // abhi bhi galat output aarha

    // deletion
    // pop_heap() : max element remove hojaayega aur next greter element , max element bnn jaayega
    // T.C. -> O(1) because max element top me he hoga

    pop_heap(vec.begin() , vec.end());
    vec.pop_back();
    for (int vals : vec){
        cout << vals << " ";
    }
    cout << endl;

    // yeh bhi sahi se nhi chal rha , max element remove nhi hua balki last me aagaya

    // sort_heap() : heap me jo elements hai voh sort krdega in increasing order
    // T.C. -> O(n)
    sort_heap(vec.begin() , vec.end());
    for (int vals : vec){
        cout << vals << " ";
    }
    cout << endl;


    return 0;
}
