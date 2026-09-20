#include<iostream>
using namespace std;

class Cricketer{

public:
    string name;
    int runs;
    float avg;

    // Cricketer(string name, int runs){
    //     name = name;
    //     runs = runs;
    // }

    // Here, we cannot use same names for paramters
    
    // so we use "this" to do this

    Cricketer(string name, int runs,float avg){

        // Left: member variable -> Right : parameter

        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(){
        cout <<name << " " << runs << " " << avg << endl;
    }

    // void print(int runs){       // function with parameter inside class

    //     // Agar same parameter pass kiye compiler confuse hojaayega aur jo value main function se pass krrhe voh value print krdega , so we use "this" taaki hum yeh bta paaye ki we are talking about data member jo class me present hai 
 
    //     // use "this" when we print also

    //     cout << this->name << " " <<this->runs << " " << this->avg << endl;
    // }

    int matches(){
        return runs/avg;
    }
    
};




int main(){
    Cricketer c1("Virat Kohli" , 25000, 55.2);
    Cricketer c2("Rohit Sharma" , 18000, 47.8);

    c1.print();
    c2.print();

    c1.name = "Sachin";
    c1.print();

    // c2.print(6);

    cout<<c1.matches()<<endl;


}

