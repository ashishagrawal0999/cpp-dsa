#include<iostream>
#include<queue>

using namespace std;
int main(){
    // Adapter class , provides fifo data structure 
    // insertion -> rear
    // deletion -> front

    // implemented usimng other containers (e.g. deque , list) as the underlying storge

    // header file -> #include<queue>

    // random access is not allowed

    // queue me iterator nhi hai , front print krke , front se pop krskte hai

    // creation 
    queue<int> q;

    // push , pop

    // empty , size

    // swap

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // 10 , 20 , 30 , 40

    cout<<q.size()<<" "; // 4

    q.pop();

    cout<<q.size()<<" ";

    // 20 , 30 , 40 

    if (q.empty() == true){
        cout<<"queue is empty"<<endl;
    } else {
        cout<<"queue is not empty"<<endl;
    }

    

    // front , back -> access the first and last element

    cout<<"Front"<<q.front()<<endl;
    cout<<"Back"<<q.back()<<endl;

    
    queue<int> q2;
    q2.push(1);
    q2.push(2);

    q.swap(q2);

    cout<<q.front()<<" "<<q.back();

    cout << q2.size() << " ";
    cout<<endl;
    return 0;

}