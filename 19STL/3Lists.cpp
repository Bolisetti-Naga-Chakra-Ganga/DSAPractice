#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    // copying list 

    list<int>n(5,100);
    for (int i:n){
        cout<<i<<" ";
    }
    cout<<endl;


    l.push_back(1);
    l.push_front(1);
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin()); // complexity O(n)
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"size of list"<<l.size()<<endl;

}
// ******NOTES ******//
//* we cant directly access the alement at nth position. we need to traverse the list.