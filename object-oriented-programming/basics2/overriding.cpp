#include<iostream>
using namespace std;

// Function Overriding
// Parent and child both contain the same function with different implementation

// Parent class is said to be overridden

// Jo parent class me function hoga vohi execute hoga



class Scooty{      // parent class
public:
    void sound(){
        cout<<"Vroom Vroom"<<endl;
    }

};


class Bike : public Scooty{     // child class
public:
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }

};


int main(){
    Bike* b1 = new Bike();  // object pointer
    b1->sound();

    Scooty* s1 = new Scooty();
    s1->sound();

    Scooty* b2 = new Bike();    // 
    b2->sound();
}