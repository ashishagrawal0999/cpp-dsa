// Abstract classes are used to provide a base class from which other class can be derived
// means created only for implementing inheritance

// gives blueprint for child class

// we cannot make object (cannot instantiate) of abstract class

// it has atleast one pure virtual function


// abstract -> jiski proper definition define naa ki ho

// ex.) Class -> Shape { draw() }
// shape humne define nhi kiya bss draw krne boldiye

// Pure virtual fnx or abstract fnx -> is a virtual fnx with no definition
// It is declared by assigning 0 at the time of declaration


#include<iostream>
using namespace std;

class Shape{                         // abstract class
    public:
       virtual void draw() = 0;      // abstract fnx, pure virtual fnx
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"draw circle"<<endl;
        }
};

class Square : public Shape{
    public:
        void draw(){
            cout<<"draw square"<<endl;
        }
};

int main(){
    Circle cir1;
    cir1.draw();

    Square sq1;
    sq1.draw();

    return 0;
}
