#include <iostream>
#include <string>
using namespace std;

int main(){

    // strings : data structure to store sequence of caharacters 
    // dynamic in nature 
    // can store alphabets , special symbols , and no.s also
    // header file -> #include<string>
    // null character automatically add hota hai hum e voh khud se nhi krna hota

    // string fullName = "Love Babbar";
    // cout<<fullName;   // Love Babbar
    // cout<<fullName[3]<<endl;             // accessing through index

    // string str;
    // // cin >> str;       // cin me input me space nhi deskte
    // // cout<<str;

    // // getline
    // getline(cin , str);   // getline me space ke saath value input deskte hai , yaha bhi delimeter hota hai , bydefault nextline character hai
    // cout<<str<<endl;

    // cout<<"Length : "<<str.length()<<endl;          // length()


    // str.push_back('X');  
    // cout<<str<<endl;                                // push_back()
    // cout << "Length : " << str.length() << endl;

    // str.pop_back();                                 // pop_back()
    // cout << str << endl;    
    // cout << "Length : " << str.length() << endl;


    // str.clear();


    // if(str.empty() == true){
    //     cout<<"Empty";
    // } else {
    //     cout<<"Not Empty";
    // }


    string str2 = "Babbar";
    cout << *(str2.begin())<<endl;            // B
    cout << *(str2.end() - 1 )<<endl;         // r

    reverse(str2.begin() , str2.end());
    cout<<str2<<endl;

    cout<<str2.front()<<endl;                  // B

    cout << str2.at(8) << endl;
    
    
    // traverse :
    for(char ch : str2){
        cout<<ch<<" ";
    }
    cout<<endl;

    for(int i=0 ; i<str2.length(); i++){
        cout<<str2[i]<<endl;
    }
    cout<<endl;

  
    return 0;
}
