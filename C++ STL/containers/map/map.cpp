#include<iostream>
#include<map>

using namespace std;
int main(){

    // Map -> collection of entries aur entries are key -> value pairs
    // har ek entry (key -> value) form me store hoti hai

    // header file -> #include<map>
    // har ek key ek value ko store kregi
    // Ek Table Hai Jisme data store hai

    // Map me jitni bhi entries hongi voh sequence wise print hogi  (lexicographically)
    // Unordered Map me sequence follow nhi hota
    // Baaki sabhi cheez map (ordered map) aur unordered_map me same hai

    // 1.) agar object ho toh hum .operator se access krskte hai jaise :
    // hum entries ko mapName.first (mtlb key) aur mapName.second (mtlb value) krke access krskte hai


    // 2.) agar iterator yaa pointer use krrhe hote toh :
    // mapName->first aur mapName->second krke krna hota



    // key -> value
    // key -> int type , value -> string type

    //    _____________________________
    //    |                            |
    //    |  1. ->  "Apple"            |
    //    |____________________________|
    //    |  2. ->  "Mango"            |
    //    |____________________________|
    //    |  3. ->   "Banana"          |
    //    |____________________________|




    // key can also be of type string
    // key -> string type , value -> string type

    //    _____________________________
    //    |                            |
    //    |  "app" ->  "Apple"         |
    //    |____________________________|
    //    |  "mn" ->  "Mango"          |
    //    |____________________________|
    //    |  "bn" ->   "Banana"        |
    //    |____________________________|


    // allows efficient retrieval and modification of values based on keys
    // keys are unique within the map -> keys should be unique


    // creation :
    map<string,string> table;

    // insertion :
    table["in"] = "India";
    table["au"] = "Australia";

    // table.insert(make_pair("en","England"));

    // pair<string,string> p;
    // p.first = "br";
    // p.second = "brazil";
    // table.insert(p);


    // "in" key me jo value hai voh print hojaayegi
    cout << table.at("in") << endl;     // india
    cout << table["in"] << endl;        // india


    // updating values
    // update -> [] aur .at se update krskte hai

    table["in"] = "india2";
    table.at("in") = "india3";
    cout << table.at("in") << endl;     // india3


    table["nz"] = "New Zealand"; // creating more entries
    table["us"] = "USA";


    // Iterators -> begin, end, rbegin, rend,  cbegin, cend
    // unordered_map me rbegin aur rend nhi hote


    map<string,string>::iterator it = table.begin();
    while(it != table.end()){
        cout<<(it->first)<<" "<<(it->second)<<endl;     // it->first ka equivalent hai (*it).first mtlb it se humne poori entry access krli  , phir uske first value ko print krdiye aur usi tarah se second value print krdiye
        it++;
    }

    // lexographically answer ascending order me aayega mtlb keys alphabetically arrange honge aur uske corresponding answer honge


    if (table.empty() == true){
        cout << "Map is empty";
    } else {
        cout << "Map is empty";
    }

    cout<<"count is "<<table.count("in")<<endl;

    // cout << table.size() << endl;
    // table.clear();
    // cout << table.size() << endl;

    return 0;

}
