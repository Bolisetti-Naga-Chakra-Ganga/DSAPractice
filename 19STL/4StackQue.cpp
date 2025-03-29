#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    /*
    stack<string>s;
    s.push("love");
    s.push("bubber");
    s.push("kumar");
    cout<<"top element -->"<< s.top()<<endl;
    s.pop();
    cout<<"top element -->"<< s.top()<<endl;
    cout<<"size of the stack "<< s.size()<<endl;

    cout<<"empty or not "<< s.empty()<<endl;
    */

    /*
    queue<string> q;
    q.push("love");
    q.push("bubber");
    q.push("kumar");
    cout<<"top element -->"<< q.front()<<endl;
    cout<<"size of the stack befor pop "<< q.size()<<endl;
    q.pop();
    cout<<"top element -->"<< q.front()<<endl;
    cout<<"size of the stack after pop "<< q.size()<<endl;
    */

    // priority queue 

    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout<< "size"<<maxi.size()<<endl;
    int n=maxi.size();
    for (int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    // minimum element will be inserted first 
    mini.push(5);
    mini.push(2);
    mini.push(7);
    mini.push(4);
    mini.push(8);

    int s=mini.size();
    for (int i=0;i<s;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"is empty -->"<< mini.empty()<<endl;
}
// ***** NOTES *******//
// Last In First Out 