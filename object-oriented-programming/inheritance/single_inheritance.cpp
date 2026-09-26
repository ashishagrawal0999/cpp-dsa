#include<iostream>
using namespace std;

// Inheritance -> a class inheriting properties from its parent class , also it has some properties of its own
// mode of inheritance : public, private, protected

// derived class  : modeofinheritance  base class{
//}


class Animal{                   // parent class
public:
    string color;

    void eat(){
        cout<<"eats"<<endl;
    }

    void breathe(){
        cout<<"breathe"<<endl;
    }
};


// mode of inheritance : public, private, protected

// derived class  : modeofinheritance  base class{
//}

// : public Fish
// inheriting the public properties of class Animal

class Fish : public Animal{
public:
    int fins;

    void swim(){
        cout<<"swim"<<endl;
    }
};


int main(){
    Animal A;
    A.breathe();
    A.eat();
    cout<<A.color<<endl;

    Fish F;
    F.breathe();
    F.eat();
    F.swim();

    return 0;
}






