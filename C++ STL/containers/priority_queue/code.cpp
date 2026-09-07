#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Adapter class that provides a priority queue(heap)
    // Elements are stored in a way that allows the retrieval of the highest - priority element effciently

    // prioity queue --> maximum element at the top
    // header file -> #include<queue>
    // itertor nhi hai 
    
    
    // creation 

    priority_queue<int> pq;

    // max-heap -> maximum value -> highest priority
    // push -> add highest priority element in front -> heapify operation -> T.C. -> O(logn)
    // pop -> remove highest priority element from pq and make the next next highest priority element as priority element 
    
    // pop() , top() -> T.C. -> O(1)

    pq.push(20);
    // 20
    pq.push(30);
    // 30 , 20
    pq.push(45);
    // 45 , 30 , 20
    pq.push(36);
    // 45 , 36 , 30 , 20

    cout<<pq.top()<<endl;    // 45 , gives highest priority element

    while(!pq.empty()){
        cout << pq.top() << " "; // 45 , 36 , 30 , 20
        pq.pop();
    }
    cout<<endl;


    if(pq.size() == 0){             // pq.empty() == true
        cout<<"pq is empty";
    } else {
        cout<<"pq is not empty";
    }

    return 0;
}

