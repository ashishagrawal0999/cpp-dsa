#include<iostream>
#include<queue>
using namespace std;

int main(){

    // min heap -> minimum value -> highest priority
    // reverse order prioity queue --> minimum element at the top

    priority_queue<int , vector<int>, greater<int>> pq;

    pq.push(5);      
    // 5
    pq.push(4);
    // 4 , 5
    pq.push(10);
    // 4 , 5 , 10
    pq.push(12);
    // 4 , 5 , 10 , 12

    cout<<pq.size()<<endl;

    while(!pq.empty()){
        cout << pq.top() << " ";   // 4 , 5 , 10 , 12
        pq.pop();
    }

    if(pq.empty() == true){
        cout<<"pq is empty";
    } else {
        cout<<"pq is not empty";
    }

    cout<<endl;
}
