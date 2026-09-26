#include <iostream>
using namespace std;

class Animal{
    public: 
        void eat(){
            cout<<"eating"<<endl;
        }

        void breathe(){
            cout<<"breathing"<<endl;
        }
};

class Mammal : public Animal{
    public:
        string bloodType;
};

class Dog : public Mammal{
    public:
        void tailWig(){
        cout<<"a dog wigs its tail"<<endl;
    }
};


int main(){

    Dog d1;
    d1.breathe();
    d1.tailWig();
    d1.bloodType = "warm";
    cout<<d1.bloodType<<endl;

    return 0;
}