#include<iostream>
using namespace std;

// OOPS -> to overcome the issues and limitations faced in functional programming
// class -> properties and behaviours
// attributes are properties or state
// behaviour is defined through methods (function)
// Student is a user defined data type -> Isme multiple datatype ke data hosktte hai

class Student {
    public:
        // Data members / properties
        string name;
        int age;
        float cgpa;

        // Member function / method
        void getPercentage(){
            cout<< (cgpa * 10) << "%" <<endl;
        }

        void study(){
            // this current object ko represent krta hai
            cout<<this<<endl;   // current object
            cout<<this->age<<" Studying"<<endl;
        }

        void sleep(){
            cout<<this->name<<" Sleeping"<<endl;
        }
};


int main(){

    // Student s1 = new Student();
    // object -> real world entity , instance of a class
    // creating an object of student in compile time

    // . opperator is used to initialise
    // Accessing members using . operator

    Student s1;
    s1.name = "Raghav";
    s1.age = 20;

    // s1.cgpa = 8.7;
    // we can also take input
    cin >> s1.cgpa;

    // Calling member function
    s1.getPercentage();

    // .operator is also used to print
    // Accessing members
    cout<<s1.name<<" "<<s1.age<<" "<<endl;


    return 0;
}



