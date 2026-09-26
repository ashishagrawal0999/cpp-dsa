#include <iostream>
#include<string>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(){
        cout << name << " " << this->runs << " " << avg << endl;
    }
};

void change(Cricketer* c){  // Address received in pointer
    // (*c).avg = 77.2;

    c->avg = 77.2;  


}

int main(){
    
    // int x = 4;
    // int y = 5;

    // cout<<&x<<endl;
    // cout<<&y<<endl;

    // int* p = &x;
    // // pointer of type int , storing address of x
    // cout<<p<<endl;

    // cout<<*(p)<<endl;
    // // value stored at address

    // *p = 8;
    // // changing value present at that address

    // cout<<x;

     Cricketer c1("Virat Kohli", 25000, 55.2);
     cout<<c1.avg<<endl;   

     change(&c1);   // passing address

    //  Cricketer c2("Rohit Sharma", 18000, 47.8);

      Cricketer* p1 = &c1;
     //  cout<<(*p1).runs<<" ";        // Printing values

     cout<<p1->runs;

     //  (*p1).name = "KL Rahul";   // Modifying values
     //  cout<<(*p1).name;

}
