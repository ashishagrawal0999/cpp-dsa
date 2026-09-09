#include<iostream>
#include<list>

using namespace std;
int main(){

    // List -> a ds in which data is stored in the form of nodes , and has pointer to next node
    // non contagious memory allocation

    // header file -> #include<list>
    // Allows fast insertion and removals anywhere in the list
    // Non-contiguous memory

    // List container is based on doubly linked list
    // Doubly Linked list -> has pointer to previous node , data , and has pointer to next node

    // | prev | data | next |->| prev | data | next |->| prev | data | next |
    // head ^                                                          ^null


    // No random access
    // Iterator → Bidirectional

    // forward_list mein iterator ko-- nahi kar sakte,
    // jabki list mein kar sakte ho.

    // Time Complexity:

    // push_back() , push_front()    -> O(1)
    // pop_back() , pop_front()      -> O(1)
    // front() , back()              -> O(1)
    // size()                        -> O(1)
    // insert()                      -> O(1) if iterator to position is available
    // erase()                       -> O(1) if iterator to position is available
    // remove()                      -> O(n)
    // clear()                       -> O(n)
    // Access by position            -> O(n)
    // Random access                 -> Not supported

    // creation :
    list<int> myList;

    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10->20
    myList.push_back(30);
    // 10->20->30

    myList.push_front(40);
    // 40->10->20->30
    myList.push_front(50);
    // 50->40->10->20->30

    myList.pop_back();
    // 50->40->10->20

    myList.pop_front();
    // 40->10->20

    cout << myList.size() << " " << endl;

    // using for each loop
    for (int vals : myList){
        cout << vals << " ";
    }
    cout << endl;

    // empty() :
    if (myList.empty()){
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }

    cout << "Front : " << myList.front() << " " << endl; // 40
    cout << "Back : " << myList.back() << " " << endl;   // 20
    myList.push_back(50);                                // 40->10->20->50

    cout << "before removing" << endl;
    list<int>::iterator it = myList.begin();

    while (it != myList.end()){
        cout << *(it) << " ";
        it++;
    }
    cout << endl;

    // remove() :
    // removing element
    myList.remove(10);                                  // 40->20->50

    list<int>::iterator it2 = myList.begin(); // naya iterator banana hoga yaa iterator reset krna hoga because , jab humne pehle while loop use kiya tab itertor list.end() ko point krrha tha traversal complete hone ke baad

    cout << "after removing" << endl;
    while (it2 != myList.end()){
        cout << *(it2) << " ";
        it2++;
    }

    myList.clear();

    return 0;
}
