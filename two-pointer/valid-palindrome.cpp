#include<iostream>
#include<string>
using namespace std;

// Valid Palindrome -> given string should be same when we read it from start and end 

bool checkPalindrome(string s){
    int st = 0;
    int end = s.length() - 1;

    while(st<=end){
        if(s[st] != s[end]){
            return false ;
        } else {
            st++;
            end--;
        }
    }

    return true;
}


int main(){
    string s = "racecar";
    bool ans = checkPalindrome(s);
    cout<<ans;

    return 0;
}
