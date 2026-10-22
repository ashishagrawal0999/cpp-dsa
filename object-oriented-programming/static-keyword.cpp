#include<iostream>
#include<string>
using namespace std;

// void counter(){
//     // int count = 0;
//     static int count = 0;

//     count++;
//     cout<<"count is : " << count <<endl;
// }

// memory me har function call ke liye new variable bnegi aur value 0 se he start hogi

// but with static keyword in function , memory me ek baar bss new static variable bnega and then value wahi se update hogi , and variable lifetime ke liye memory me bana rhega



class Example{
    public:
       static int x;

};

// static variabe in a class are created and initialised once and shared by all the objects of the class

// initialised class ke baahar krna hota hai
int Example::x = 0;


int main(){
    // counter();  // 1
    // counter();  // 1
    // counter();  // 1

    //  counter();
    //  counter();
    //  counter();
    // 1 2 3

    Example eg1;
    Example eg2;

    cout<<eg1.x++<<endl;    // 0
    cout<<eg2.x++<<endl;    // 1

    return 0;
}




