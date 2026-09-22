// Create a user with properties : id(private), username(public) & password(private).
// It should be initialized in a parameterised constructor.
// It should have a getter and setter for password.

#include<iostream>
using namespace std;

class User{


    private:
    int id;
    string password;

    public:
    string username;


    User(int id){
        this->id = id;
    }

    string getPassword(){
        return password;
    }

    void setPassword(string password){
        this->password = password;
    }

    int getId(){
        return id;
    }

 
};


int main(){
    User u1(56);
    u1.username = "apnacollege";
    cout<<u1.username<<endl;

    u1.setPassword("apnacollege009");
    cout<<u1.getPassword()<<endl;


    cout<<u1.getId()<<endl;

    return 0;
}