#include<iostream>
using namespace std;

// Operator Overloading -> Compile Time Polymorphism
// same operator , but redefine krke use krna

// returnType operator opSymbol(){

// }



class Fraction{
public:
    int numerator;
    int denominator;

    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void display(){
        cout << numerator<<"/"<<denominator<<endl;
    }

    void fraction(){
        int newNum = this->numerator*f.denominator + f.numerator*this->denominator;

        int newDen = this->denominator*f.denominator  
    }
};





int main(){
    Fraction f1(5,4);
    Fraction f2(1,3);

    f1.display();
    f2.display();
}