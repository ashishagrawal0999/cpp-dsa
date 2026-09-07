#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main(){

// header file -> #include <unordered_map>


// creation Of unordered map
unordered_map<int,string> um;


// insertion -> using insert , emplace and []
um.insert({1,"Apple"});         // yaha khud as an object bana ke dena pdta hai
um.emplace(1, "Apple");         // emplace me curly bracket nhi dena pdta -> voh object khud bana leta hai

um[1] = "Apple";
um[2] = "Mango";
um[3] = "Banana";
um[4] = "Orange";
um[5] = "Grapes";


// update -> [] aur .at se update krskte hai
um[5] = "Papaya";
um.at(5) = "Pomogranate";


// Accessing Values
cout<<"Entry at key 2 is : "<<um[2]<<" "<<um.at(2)<<" "<<endl;


// Updating values
um[7];                  // [] -> square bracket , 7 naam ki key nhi hai toh yeh new entry create krdega 7 name ki
// um.at(7);            // par yeh exception throw krdega


cout<<um.count(4)<<" ";
// map/unordered_map mein keys unique hoti hain, isliye result:
// 0 mtlb key nahi hai  , 1 mtlb key hai


cout<<um.size()<<" ";

if(um.empty() == true){
    cout<<"Empty";
} else {
    cout<<"Not Empty";
}


// Iterators: 
// 1.) begin , end : normal iterators
// 2.) cbegin , cend : const iterators , isme value update nhi krskte

// find() -> particular key ko map me search krta hai aur iterator deta hai uss particular entry ki
// ex.)  um.find(3) , key 3 ko map search kro
// um.find(3) , yeh key 3 ka iterator dedega 
// Yahan find(3) poore map mein internally search karta hai , khud while loop yaa for-each loop likhne ki zaroorat nahi.
// find() khud searching ka kaam karta hai.

// auto it = um.find(3);

//              ________________
//       it ->  | 3 → "Banana" |
//              |______________|             

// it key 3 wali poori entry(pair) ko point kar raha hai.
// cout<<it->first<< " "<<it->second<<" ";

// agar key nhi mili toh iterator , um.end() return krdega



// Specific key search
// 1.) find() : key present hai yaa nhi aur hai toh voh entry bhi dedeta hai
unordered_map<int, string>::iterator it = um.find(3);       // auto it = um.find(3);

if(it != um.end()){
    cout<<"Key is found";
    cout<<it->first<<" "<<it->second<<" ";
} else {
    cout<<"Key is not found";
}

// 2.) contains() : sirf btata hai key present hai yaa nhi



// Complete map traversal using iterator
unordered_map<int, string>::iterator it2 = um.begin();      // auto it2 = um.begin();

while (it2 != um.end()){
    // yaha hume entry ka iterator milrha isiliye -> use krrhe
    cout<<it2->first<<" "<<it2->second<<" ";
    it2++;
 }

 // Complete map traversal using "range-based for"
 // "range-based for" me "entry" sirf ek variable hai jisme voh particular pair hai (key : value) ki 
 // yaha entry pair he hai isiliye entry.first aur entry.second likh rhe
 for (auto entry : um){
     cout<<entry.first<<" "<<entry.second<<" ";
 }



 // Complete map traversal using "iterator-based for"
     for (auto it = um.begin(); it != um.end(); ++it){ 
         cout << it->first << " " << it->second << " ";
 }



// find() → specific entry
// begin() + while → iterator se all entries
// range-for → all entries without manually handling iterator
// iterator ke liye use krenge ->
// ++it krna better hai because iterator ke case me better habit hai


// count()

if(um.count(1) == 0){
    cout<<"Key not found";
} else {
    cout<<"Key found";
}




um.erase(2); // entry whose "key" is 2 is deleted

 // um.erase(um.begin() , um.end());             // range deletion , yeh sahi hai , hum bss begin , end ka use krskte hai erase me
 // um.erase(um.begin() , um.begin() + 2);     yeh possible nhi hai because map ke iterators , random access iterators nhi hote isiliye begin() + 2 allowed nhi hai range deletion me

 // kisi key ke liye iterator bana ke bhi delete krskte hai because kbhi kbhi key nhi par iterator present hota hai

 // auto it = um.find(2);

 // if(it != um.end()){
 //     um.erase(it);
 // }

 // 4. Traverse + conditionally erase
 // auto it = um.begin();

 // while (it != um.end()){
 //     if (condition)
 //         it = um.erase(it);
 //     else
 //         ++it;
 // }

 cout << um.size() << " ";

 um.clear(); // saari entries delete

 return 0;

}
















