#include <iostream>
#include <string>
using namespace std;

// Constructor -> used to iniliaze variables , Better way to initialize
// initialised with className 

class Car {
public:
    string name;                // properties
    int price;
    int seats;
    string color;


    // Non-parameterised constructor (default constructor created by compiler)
    // if we dont create a constructor then it is called by default
    // Car(){
    // }

    // yaha humne khud se banaya hai bss default constructor
    // Car(){  
    //     cout << "this is non-parameterised constructor";
    //     cout << "constructor is called , object being created" << endl;
    // }


    // Parameterised constructor
    Car(string nameValue , string colorValue){
        cout << "this is parameterised constructor";
        cout << "Constructor is called , object being created" << endl;

        this->name = nameValue;
        this->color = colorValue;
    }


    // methods 
    void start(){
        cout<<"Car has started"<<endl;
    }

    void stop(){
        cout<<"Car has stopped"<<endl;
    }

};


int main(){

    // Car c0;                // calling non parameterised constructor

    
    // Car c1;
    // c1.color = "red";
    // c1.name = "Audi";
    // aise bhi krskte but contructor ke help se hum better tarike se object ki properties ko inisitialise krskte hai


    // constructor input lega aur current object ki properties ki value me set krdega

    Car c1("Audi" , "red");   // giving values to constructor
    cout<<c1.name<<" "<<c1.color<<" ";   
    return 0;
}

