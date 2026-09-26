#include<iostream>
#include<iostream>
using namespace std;

class User{
private:
    int id;
    string password;

public:
     string username;

        User(int id){
            this -> id = id;
            // left -> right
            // object ki id -> paramtere wali id 
        }

        // setter
        void setPassword(string newPassword){
            this -> password = newPassword;
        }
        // getter

        string getPassword(){
            return password;
        }

};


int main(){
    User user1(100);
    user1.username = "Apna College";
    user1.setPassword("abcd");

    cout<<"username: "<<user1.username<<endl;
    cout<<"password: "<<user1.getPassword()<<endl;
}
