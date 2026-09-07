#include<iostream>
#include<list>

using namespace std;
int main(){

    // List -> a ds in which data is stored in the form of nodes , and has pointer to next node 
    // non contagious memory allocation

    // header file -> #include<list>

    // Doubly Linked list -> has pointer to previous node , data , and has pointer to next node

    // | prev | data | next |->| prev | data | next |->| prev | data | next |
    // head ^                                                          ^null
    

    // Allows fast insertion and removals anywhere in the list

    // In vectors -> to access any data takes O(1) time
    // No random access like vectors -> takes O(n) time to access any data


   // Creation
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

    cout << myList.size() << " ";

   

    // using for each loop

    for (int vals : myList){
        cout<<vals<<" ";
    }

    cout<<endl;

    if (myList.empty()){
        cout << "List is empty"<<endl;
    }
    else{
        cout << "List is not empty"<<endl;
    }

    cout<<myList.front()<<" ";
    cout<<myList.back()<<" ";

    cout<<endl;

    myList.push_back(10);


    cout<<"before removing"<<endl;
    list<int> :: iterator it = myList.begin();

    while(it != myList.end()){
        cout<<*(it)<<" ";
        it++;
    }

    cout<<endl;

    myList.remove(10);

    list<int> :: iterator it2;      // naya iterator banana hoga yaa iterator reset krna hoga because , jab humne pehle while loop use kiya tab itertor muList.end() ko point krrha tha traversal complete hone ke baad

    cout<<"after removing"<<endl;
    while(it2 != myList.end()){
        cout<<*(it2)<<" ";
        it++;
    }


    myList.clear();

    return 0;

}