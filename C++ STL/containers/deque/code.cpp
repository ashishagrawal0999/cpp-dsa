#include<iostream>
#include<deque>

using namespace std;

int main(){

    // Deque -> Doubly ended queue
    // Internally uses segmented/block-based storage
    // allows efficient insertion and removal at both ends
    // header file -> #include <deque>
    // memory : segmented

    // T.C. :
    // Random access                     : O(1)
    // push_back() & push_front()        : O(1) amortized
    // pop_back() & pop_front()          : O(1)
    // insert() & erase()                : O(n) generally
    // clear()                           : O(n)

    // deque provides : Random Access Iterator
    // begin(), end(), rbegin(), rend()
    // queue is a container adapter and does not provide direct iterators

    //       ____________________
    //       __|____|____|____|__
            
    // front  ^                 ^ back

    // It also has functions which are there in vector and list like front , back , begin , end , size etc
    // similar to vectors but deque ke elements generally contiguous memory mein stored nahi hote, unlike vector

    

    // creation :
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
        cout<<"Deque is empty"<<endl;
    } else {
        cout<<"Deque is not empty"<<endl;
    }

    dq.push_back(40);             //  20 , 10 , 40
    dq.push_front(50);            //  20 , 10 , 40

    cout<<dq[2]<<" "<<dq.at(1)<<endl;       // 10 , 20


    deque<int>::iterator it =  dq.begin();
    while(it != dq.end()){
        cout << *(it) << " ";           // 50 , 20 , 10 , 40
        it++;
    }
    cout<<endl;

    
    // insertion at particular index
    dq.insert(dq.begin(), 90);          // 90 , 50 , 20 , 10 , 40

    cout<<dq[0]<<" ";                   // 90


    cout << dq.size() << " ";
    dq.clear(); // dq is empty
    cout << dq.size() << " ";

    return 0;
}

