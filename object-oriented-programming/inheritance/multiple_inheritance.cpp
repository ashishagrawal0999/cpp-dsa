#include <iostream>
using namespace std;

// multiple inheritance -> 2 or more base class

class Teacher{
    public:
        int salary;
        string subject;
};

class Student{
    public:
        int rollnum;
        double cgpa;
};


// extends more than one class , using comma " , "

class TA : public Teacher, public Student{
    public:
        string name;
};


int main(){
    TA ta1;
    ta1.name = "Shradha Khapra";
    ta1.subject = "C++";
    ta1.cgpa = 9.1;

    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;

    return 0;
} 