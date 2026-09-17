#include<iostream>
#include<string>
using namespace std;
int main(){

    string name = "love babbar";

    // substr() -> provides substring -> part of a string
    // substr(index , size)
    // index -> where to start from , kaha se substring start krni hai
    // size nhi diye toh string ke end tk jaayega
    cout << name.substr(3, 100) << endl;



    // find() ->
    // string search
    int ans = name.find("lovebabbar");
    cout<<ans<<endl;  // gives the index jaha se substring start horhi ho


    // string search , start index
    int ans2 = name.find("babbar",5);
    cout << ans2<<endl;


    // char search , valid ans
    int ans3 = name.find('l');
    cout<<ans3<<endl;


    // char search , npos
    if(name.find('k') == string::npos){
        cout<<"k is not present inside string"<<endl;
    } else{
        cout<<"k kis present"<<endl;
    }


    // Compare 
    string first = "Love";
    string second = "Love";

    cout<<first.compare(second)<<endl;  // 0 if same value , -1 if lowercase value , 1 if uppercase value 

    
    return 0;
}