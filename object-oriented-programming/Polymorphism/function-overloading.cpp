#include<iostream>
#include<string>
using namespace std;

class Loading{
public:

// Function Overloading -> compile time me decide hoga ki konsa function call hoga

// same function with same return type with different number of parameters and different type of paramteres

// order of parameter also matters

// function name will be same

    void sum(int a, int b){
        cout<<a+b<<endl;
    }

    void sum(int a, int b , int c){
        cout<<a+b+c<<endl;
    }

    void sum(string a, string b){
        cout << a + b << endl;
    }

};

int main(){
    Loading a;
    a.sum("Raghav", "Garg");
    a.sum(5,6);
    a.sum(4,5,6);

    return 0;
}
