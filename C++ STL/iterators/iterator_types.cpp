#include <iostream>
#include <vector>
#include <forward_list>
#include<list>
using namespace std;

int main(){

    // header file -> #include<forward_list>
    // forward list -> based on singly linked list
    // sirf aage jaaskte hai peeche nhi

    // Iterator types:
    // 1.) Input Iterator
    //     - Read values
    //     - Move forward using ++
    //     - Generally single-pass
    //
    // 2.) Output Iterator
    //     - Write values
    //     - Move forward using ++
    //     - Cannot be used for reading

    // 3.) Forward Iterator
    //     - Read + Write
    //     - Move only forward using ++
    //     - Can be multi-pass



    // forward_list  → Forward
    // forward_list mein iterator ko-- nahi kar sakte,
    // jabki list mein kar sakte ho.



    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);
    // // 30->20->10

    // forward_list<int> :: iterator it2 = list.begin();
    // while(it2 != list.end()){
    //     cout << "original value : " << (*it2) << " " << endl;        // 30,20,10          // reading
    //     (*it2) = (*it2) + 20;                                        // 50,40,30          // writing
    //     cout<< "change value : " << (*it2) <<endl;
    //     ++it2;
    // }


    // 4.) Backward iterator : read and write values in backward direction
    // Par forward_list ke andar backward move nhi krskte , isiliye yeh nhi chlega
    // forward_list<int> :: iterator it3 = list.end();
    // while(it3 != list.begin()){
    //     cout<< (*it3) << endl;
    //     --it3;
    // }

    return 0;
}
