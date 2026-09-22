#include<iostream>
using namespace std;

// GLOBAL VARIABLE -> written outside of a function , accessible to all function

// LOCAL VARIABLE -> written inside a function , accessible inside that function scope only 

int x = 2;      // GLOBAL VARIABLE


int main(){

    cout << ::x << endl;      // 2, GLOBAL x ko access krrhe with ::
    ::x = 20;                 // 20
    cout << ::x << endl;      // 20 

    int x = 4;          // LOCAL to main() fucntion
    cout<<x<<endl;      // 4 

    // LOCAL Ki zyada priority hoti hai GLOBAL se
    // agar same varaible alag alag scope me defined hai toh uski priority sabse zyada most local me hogi

    // Global poore file me kahi bhi access hojaayega , local sirf apne scope me he hoga
    

        {
         int x = 50;
         cout<<x<<endl;   
         cout<<::x<<endl;
        }

    return 0;
}