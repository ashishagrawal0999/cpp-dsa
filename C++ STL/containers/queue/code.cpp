#include<iostream>
#include<queue>

using namespace std;
int main(){
    // Adapter class , provides fifo data structure
    // implemented usimng other containers (e.g. deque , list) as the underlying storge
    // header file -> #include<queue>

    // insertion -> rear
    // deletion -> front


    // creation :
    queue<int> q;

    // push() : add element to the back of queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40

    queue<int> q2;
    q2.push(5);
    q2.push(6);
    q2.push(7);

    // pop() : remove element from the front of queue
    q.pop();        // 20,30,40

    // size() :
    cout<<q.size()<<" "; // 3

    // empty() :
    if (q.empty() == true){
        cout<<"queue is empty"<<endl;
    } else {
        cout<<"queue is not empty"<<endl;
    }


    // front() , back() : access the first and last element
    cout << "Front : " << q.front() << endl;
    cout << "Back : " << q.back() << endl;


    queue<int> temp = q;            // created a queue name temp initialised with the copy of q
    queue<int> temp2 = q2;          // created a queue name temp2 initialised with the copy of q2
    // because agar humne pehle he queue ke elemnts print krke remove krdiye toh queue empty hojaayega aur phir swap nhi krpaayenge


    cout<<"Before swap :"<<endl;

    cout<<"temp :"<<" ";
    while(!temp.empty()){
        cout << temp.front() << " ";        // random access is not allowed
        temp.pop();                         // queue me iterator nhi hai , front print krke pop krskte hai
    }
    cout<<endl;

    cout<<"temp2 :"<<" ";
    while(!temp2.empty()){
        cout << temp2.front() << " ";
        temp2.pop();
    }
    cout<<endl;




    // swap() :
    // swapping temp queue
    temp = q;   // resetting values
    temp2 = q2;

    temp.swap(temp2);
    cout << "After swap :" << endl;
    cout << "temp :" << " ";

    while (!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    cout<<endl;


    cout<<"temp2 :"<<" ";
    while (!temp2.empty()){
        cout << temp2.front() << " ";
        temp2.pop();
    }
    cout<<endl;

    return 0;
}
