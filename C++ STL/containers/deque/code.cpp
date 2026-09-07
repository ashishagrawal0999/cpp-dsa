#include<iostream>
#include<deque>

using namespace std;

int main(){

    // Deque -> Doubly ended queue
    // similar to vectors but allows efficient insertion and removal at both ends

    //       ____________________
    //       __|____|____|____|__
            
    // front  ^                 ^ back


    // insertion and deletion can be done from both ends
    // header file -> #include <deque>
    // it also has functions which is there in vector and list like front , back , behin , end , size etc
    // random access like vector -> T.C. -> O(1)


    // creation
    deque<int> dq;
    dq.push_back(10);       // 10
    dq.push_front(20);      // 20 , 10
    dq.push_back(30);       // 20 , 10 , 30
    dq.push_front(40);      // 40 , 20 , 10 , 30

    dq.pop_back();          // 40 , 20 , 10
    dq.pop_front();         // 20 , 10 

    cout<<dq.front()<<endl;       // 20
    cout<<dq.back()<<endl;        // 10

    cout<<dq.size()<<endl;

    if(dq.empty() == true){
        cout<<"Deque is empty";
    } else {
        cout<<"Deque is not empty";
    }

    dq.push_back(40);
    dq.push_front(50);

    cout<<endl;

    cout<<dq[2]<<" "<<dq.at(1)<<endl;


    deque<int>::iterator it =  dq.begin();
    while(it != dq.end()){
        cout<<*(it)<<" ";
        it++;
    }

    cout<<dq.size()<<" ";
    dq.clear();                 // dq is empty
    cout<<dq.size()<<" ";

    dq.insert(dq.begin() , 90);

    cout<<dq[0]<<" ";


    return 0;
}

