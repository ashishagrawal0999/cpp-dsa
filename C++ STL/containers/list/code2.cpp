#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);

    // list1.insert(list1.begin(),100);
    // 100 -> 10 ->  20 ->  30

    list<int> list2;
    list2.push_back(400);
    list2.push_back(500);
    list2.push_back(600);
    // 400 -> 500 -> 600

   
    list<int>::iterator it = list1.begin();
    while(it != list1.end()){
        cout<<*it<<" ";
        it++;
    }

    list1.swap(list2);

    cout<<" after swapping: ";

    list<int>::iterator it2 = list1.begin();

    while(it2 != list1.end()){
        cout<<*it2<<" ";
        it2++;
    }

    cout<<list1.size()<<" ";
    list1.erase(list1.begin() , list1.end());
    cout<<list1.size();



    return 0;

}
