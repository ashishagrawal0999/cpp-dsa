#include <iostream>
#include <string>
using namespace std;

// Encapsulation : binds data and methods in a class
// povides a secure layer
// hides internal implementation of code and data
// exposes only necessary information to the external world

// when we hide data of the class of a class from outer the outer class we call it as data hiding

// helps to prevent unauthorized access or modification of the original contents of the class by the instances(objects)



class Student{
public:
    // members declared as public are accessible from any part of the program
    // can be accesed by the objects of the class and external code

    string name;
    int rno;

    Student(){
    }

    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }



private:
    // private data members can be accessed only within the same class
    float marks;

};



int main(){

    Student s1("Raghav", 76, 98.8);
    // Here we are trying to directly access the private variable "marks" , thats why it is showing error
    // cout<<s1.marks;

    return 0;
}
