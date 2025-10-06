#include<iostream>
#include<queue>
#include<deque>
using namespace std;
int main(){

    deque<int>d;
    d.push_front(12);
    d.push_back(13);

    cout<< d.front()<< endl;
    cout<< d.back()<< endl;

    d.pop_front();
    
    cout<< d.front()<< endl;
    cout<< d.back()<< endl;
    d.pop_back();
    if(d.empty()){
        cout<< "empty"<< endl;
    }

    /*
    queue<int> q;
    q.push(12);
    cout<< "front --> "<< q.front()<< endl;
    q.push(16);
    q.push(872);
    q.push(24);
    // cout<< "size of queue is "<< q.size()<< endl;

    q.pop();
    cout<< "front --> "<< q.front()<< endl;
    // cout<< "size of queue is "<< q.size()<< endl;

    // if(q.empty()){
    //    cout<< "empty"<< endl;
    // }
    // else{
    //    cout<< "not empty"<< endl;
    // }
    */

    return 0;
}
