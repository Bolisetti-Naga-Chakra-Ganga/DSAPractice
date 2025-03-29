#include<iostream>
#include<deque>
using namespace std;
int main(){
    // static size 
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();  // last element will be removed
    // d.pop_front(); // first element will be removed

    cout<<"element at first index -->"<<d.at(1)<<endl;
    cout<<"first element -->"<<d.front()<<endl;
    cout<<"last element -->"<<d.back()<<endl;
    cout<< " empty or not -->"<< d.empty()<<endl;

    cout<<"before erase"<<d.size()<<endl;
    // to delete particular range of elements:  dequename.erase(starting, ending position to be deleted)
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;
    // max size will remains same even after erasing all the elements, but size will becomes 0
    for (int i:d){
        cout<<i<<endl;
    }

}