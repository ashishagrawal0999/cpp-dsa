#include <iostream>
#include <string>
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

    // print ko ek function ki tarah na leke ek method ki tarah leliya hai jo object ki properties ko print krega
    void print(){
        cout << name << " " << this->runs << " " << avg << endl;
    }

};


int main(){

    Cricketer c1("Virat Kohli", 25000, 55.2);

    // creating object in runtime using pointer
    Cricketer* c2 = new Cricketer("KL Rahul" , 22000 , 49.6);
    cout<<c2->runs<<endl;
    cout<<c2->avg<<endl;

    // updating values
    c2->runs = 45000;
    cout<<c2->runs<<endl;


    // yaha -> kyo use krrhe
    c2->print();
    // deleting object created in run time
    delete c2;





    // int x = 6;
    // cout<<x<<endl;
    // int* ptr = &x;
    // cout<<*ptr;
    // int* ptr = new int(5647);
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;



    return 0;

}
