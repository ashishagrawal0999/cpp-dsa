#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seats;
    string type;

    // Constructor Overloading -> more than one constructor are created with same name inside the class
    // They can have different no. of parameters , also different sequence of parameter
    // Automatically compiler detect krlega konsi object ke liye konsa conctructor call hoga
    // According to the parameter passed in constructor from the main function , the constructor is called



    Car(){ // Default Constructor -> Created by compiler
    }

    // if we dont create a constructor then it is called by default

    Car(string n, int p){ // Parameterised Constructor
        name = n;
        price = p;
    }

    Car(string n){
        name = n;
    }

    Car(string t, string n, int p, int s){
        type = t;
        name = n;
        price = p;
        seats = s;
    }

    Car(string n, int p, int s, string t){
        name = n;
        price = p;
        seats = s;
        type = t;
    }

    // Car(string name, string type, int seats, int price){
    //     this->name = name;
    //     this->type = type;
    //     this->seats = seats;
    //     this->price = price;
    // }
    // this tab use krenge jab parameter aur property same naam se likhe ho


    // // Custom copy constructor       -> ise samajhna hai , apna college
    // Car(Car &original){
    //     cout<<"copying original to new..\n";
    //     name = original.name;
    //     seats = original.seats;
    // }


    // jaise he hum main function se baahar jaayenge objects automatically clear hojaayegi

    // destructor is automatically invoked just like 

    // dynamic memory allocation ke case me we have to make a destructor in order to free the memory because run time me memory jo allocate hui hai voh khud se free nhi hogi

    // array ke form me , pointer ke form me memory allocation me hume destructor ka use krna hoga 

    // ~Car(){ }

    ~Car(){
        cout<<"object deletion.."<<endl;
    }
    

};


// Passing objects to functions: 
// normal functions, not the part of class

// 1.) better way to print:
void print(Car c){
    cout << c.name << " " << c.price << " " << c.seats << " " << " " << c.type << endl;
}

// 2.) making changes on object properties through Pass by reference
void change(Car &c){
    c.name = "Audi A8";
}


int main(){

    // Car c1;
    // c1.name = "Honda City";
    // c1.price = 1500000;
    // c1.seats = 5;

    // Constructor -> Better way to initialize
    Car c1("Maruti 800", 500000, 5, "Hatchback");
    

    // override krrhe , constructor me pass arguments ko
    // constructor me Hatchback pass hua -> type hatchback hogaya

    c1.type = "Sedan";
    // phir type sedan hogaya

    print(c1);
    change(c1);
    print(c1);

    Car c2;
    c2.name = "Maruti Suzuki";
    c2.price = 700000;
    c2.seats = 5;
    c2.type = "Hatchback";

    Car c3("BMW", 6000000, 5, "Sedan");
    Car c4("Mercedes", "Sedan", 7500000, 5);

    print(c4);

    // Copy Constructor :
    Car c5(c4);
    
    print(c5);

    return 0;
}


