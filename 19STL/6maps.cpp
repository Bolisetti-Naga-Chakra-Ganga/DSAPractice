#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1]="babber";
    m[12]="love";
    m[3]="kumar";
    m.insert({5, "bheem"}); // insertion
    for (auto i:m){
        cout<<i.first<<" - "<< i.second << endl;
    }
    cout<< "finding 3 -->"<< m.count(3)<< endl;
    m.erase(3); // o(logn)
    cout<< "after erase"<<endl;
    for (auto i:m){
        cout<<i.first<<" - "<< i.second << endl;
    }

    auto it= m.find(5);
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}