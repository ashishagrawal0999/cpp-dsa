#include<iostream>
#include<string>
using namespace std;

class Car{

private:
    int price;                      // private data member , accessed using getter and setter 

    // void secretLocker(){            // private method 
    //     cout<<"seat ke neeche secret locker hai";
    // }

public:
    string name;
    int seats;
    string type;

    Car(string name, int seats, string type ,int price){
        this->name = name;
        this->seats = seats;
        this->type = type;
        this->price = price;
    }

    // getter and setter are used when we want to access private data and methods

    // Setters -> start with set
    // takes input , so it has parameters
    // function type is void

    void setPrice(int price){
        this->price = price;
    }

    // Getters -> start with get
    // gives output
    // function type is the type of uotput it will give

    int getPrice(){
        return price;
    }

};


int main(){

    Car c1("Audi", 5, "Sedan",5000000);

    // cout<<c1.price;                      // price ek private member hai isiliye use access nhi krskte
    // c1.price = 5000000;                  // update bhi nhi krskte

    

    // par getter aur setter ke through hum private member access krskte hai aur uski value bhi set krskte hai

    // Here it is not showing error because are accessing private variable variable through a function -> "getter" which is in the class , a private member can be accessed within the class , so getter ne access krliya aur kyoki getter private hai , humne getter se access krli

    // we can also modifiy the values using function -> setter

    c1.setPrice(80000000);
    cout<<c1.getPrice()<<endl;

    return 0;
}