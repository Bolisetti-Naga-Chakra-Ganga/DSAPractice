#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation
    
    stack<int>s;

    // iinserting elements
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<< "top element --> "<< s.top()<< endl;
    s.pop();
    cout<< "top element --> "<< s.top()<< endl; 
    if (s.empty()){
        cout<< "stack is empty"<< endl;
    }
    else{
        cout<< "not empty"<< endl;
    }
    cout<<"size of the stack is "<< s.size()<<endl;

    // implementation
    return 0;
}