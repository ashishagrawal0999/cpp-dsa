#include<iostream>
#include<list>
using namespace std;

int main(){

// 5.) Bi-directional iterator :
// forward ++it , backward --it dono krskte hai
// read annd write both

// Examples: list, set, map, multiset, multimap
// begin() + 2 , end() - 1 jaise nhi krskte

list<int> l1;
l1.push_back(10);
l1.push_back(20);
l1.push_back(30);
l1.push_back(40);
// 10->20->30->40

// moving forward
list<int>::iterator it = l1.begin();
while (it != l1.end()){
    (*it) = (*it) + 2;    // writing
    cout << (*it) << " "; // forward move
    ++it;
}
cout << endl;


it = l1.begin();

// moving backward

// list<int>::iterator it2 = l1.end() - 1;
// end() - 1 nhi krskte because list ka iterator random access iterator nhi hai
// iterator abhi list ke baahar point krrha , isiliye iterator ko --it krna hoga pehle

list<int>::iterator it2 = l1.end();
while (it2 != l1.begin()){
    --it2;
    (*it2) = (*it2) + 2;   // writing
    cout << (*it2) << " "; // forward move
}

return 0;

}

