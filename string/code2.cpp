#include<iostream>
using namespace std;

// replace ' ' by X
void replaceByX(char arr[] ,int size){
    for(int i=0; i<size; i++){
        if(arr[i] == ' '){
            arr[i] = 'X';
        }
    }
}

// convert to lowercase -> -A + a
// convert to uppercase -> +A - a


void convertToLowercase(char arr[] , int size){
    for(int i=0; i<size; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

void convertToUppercase(char arr[] , int size){
    for(int i=0; i<size; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] + 'A' - 'a';
        }
    }
}

int main(){
    char arr[50];
    cout<<"enter value : "<<endl;
    cin.getline(arr,50);

    replaceByX(arr,50);
    cout<<arr<<endl;

    convertToLowercase(arr,50);
    cout << arr << endl;
    convertToUppercase(arr,50);
    cout << arr << endl;
}