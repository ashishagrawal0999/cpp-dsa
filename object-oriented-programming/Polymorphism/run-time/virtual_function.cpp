#include <iostream>
#include<vector>
using namespace std;

// Function Overriding
// Parent and child both contain the same function with different implementation

// Virtual Function -> A member function which gets redefined inside derived class

// parent class me virtual keyword ke saath define krenge

// function name same hoga , implementation different hogi

// when we want to execute the function of child class and not the parent class

class Scooty{ // parent class
    public:

    // virtualkeyword functionName(){
    //      code
    // }

    virtual void sound(){
        cout << "Vroom Vroom" << endl;
    }
};


class Bike : public Scooty{ // child class
public:
    void sound(){
        cout << "Dhroom Dhroom" << endl;
    }
};

class SuperBike : public Scooty{ // child class
public:
    void sound(){
        cout << "zroom zroom" << endl;
    }
};

int main(){
    Bike* b1 = new Bike(); // object pointer
    b1->sound();


    Scooty* s1 = new Scooty();
    s1->sound();

    Scooty* b2 = new Bike(); //
    b2->sound();

    // virtual function will show run time polymorphism

    // Parent class ka object bana ke child class ko call krna

    Scooty* b3 = new SuperBike();
    b3->sound();

    return 0;
}

