#include<iostream>
#include<set>
using namespace std;
int main(){
    // accepts one element one time i.e. even if we enter an element more than one time it will consider 1 time only.  modification not allowed. returns a sorted array
    // time complexity O(logn)
    set<int>s;
    s.insert(7);
    s.insert(3);
    s.insert(2);
    s.insert(7);
    s.insert(6);
    s.insert(5);
    s.insert(78);
    for (auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>:: iterator it =s.begin();
    it++;

    // to delete 2nd element
    s.erase(it);
    for (auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"7 is present or not "<<s.count(7)<<endl;

    set<int>::iterator itr= s.find(7);

    cout<< "value present at itr -->"<<*it<<endl;
    for (auto it=itr; it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}