#include<iostream>
using namespace std;

// Inheritance -> a class inheriting properties from its parent class , also it has some properties of its own 

class Scooty {           // parent class
 public:
    int topSpeed;
    float mileage;

private:
    int bootSpace;

};


// : public Scooty 
// inheriting the public properties of class Scooty , not private properties
class Bike : public Scooty{     // child class
 public:
    int gears;
};



int main(){
    Bike b1;
    b1.gears = 6;
    b1.topSpeed = 180;
    // b1.bootSpace = 9;  // gives error

}