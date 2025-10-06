#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    // unordered_map<string, int> map1;
    map<string, int> map1;

    // inserting data into map
    // NOTE: for every key only one entry will be created
    // 1
    pair<string, int>p = make_pair("babbar", 2);
    map1.insert(p);

    // 2
    pair<string, int> pair2("ganga", 1);
    map1.insert(pair2);


    //3
    map1["swapna"]=3; // since this is the 1st insertion of "swapna", it will create a new entry
    map1["swapna"]=4; // it will go to previous entry and modifies the value corresponding to the key ("swapna")

    // searching

    //1
    cout<< map1["swapna"]<< endl;
    cout<< map1.at("babbar")<< endl;

    // cout<<map.at("nothing")<< endl; // gives an error since the key is not available in map

    cout<< map1["nothing"]<< endl; // it will creates a key entry and retusrns 0
    cout<<map1.at("nothing")<< endl; // now it prints 0 since an entry for this key was made by above statement

    // size
    cout<< map1.size()<< endl;

    // check presence
    cout<<map1.count("bro")<< endl; // returns 1 if present, 0 if not
    cout<<map1.count("swapna")<< endl;

    // erase
    map1.erase("swapna");
    cout<< map1.size()<< endl;

    // to traverse through map
    // method - 1
    for(auto i: map1){
        cout<< i.first<< " " << i.second << endl;
    }

    // method - 2 
    // itrator
    // unordered_map<string, int> :: iterator iter = map1.begin();
    map<string, int> :: iterator iter = map1.begin();
    while( iter != map1.end()){
        cout<< iter->first<< " " << iter->second<< endl;
        iter++;
    }
    return 0;
    
}