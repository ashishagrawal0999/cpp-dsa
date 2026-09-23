#include<iostream>
using namespace std;

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
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;

    // accessing the public properties of class Animal
    f1.swim();
    f1.eat();
    f1.breathe();
}
