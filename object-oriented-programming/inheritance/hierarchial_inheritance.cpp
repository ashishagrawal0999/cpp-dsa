#include<iostream>
using namespace std;

// hierachial inheitance -> single base class , 2 or more derived class

class Animal{
    public:
    void breathe(){
        cout<<"breathe"<<endl;
    }

    void eat(){
        cout<<"eating"<<endl;
    }
};

class Bird : public Animal{
    public:
    void fly(){
        cout<<"flying"<<endl;
    }
};

class Fish : public Animal{
    public:
    void swim(){
        cout<<"swimming"<<endl;
    }
};

class Mammal : public Animal{
    public:
    void walk(){
        cout<<"walking"<<endl;
    }
};


int main(){
    Bird b1;
    b1.breathe();
    b1.fly();

    Fish f1;
    f1.eat();
    f1.swim();

    Mammal m1;
    m1.breathe();
    m1.walk();

    return 0;
}