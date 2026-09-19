#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& vec , int target){
    for (int val : vec){
        if(val == target){
            return val;
        }
    }

    return -1;
}

int main(){
    int target = 4;
    vector<int> vect1 = {1,2,3,4,5,6};

    cout<<linearSearch(vect1,target);

    return 0;

}
