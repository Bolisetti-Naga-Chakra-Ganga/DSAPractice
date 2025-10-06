// custom implementation of stack using array
#include<iostream>
using namespace std;

class Stack{
    // propetries
    public:
       int *arr;
       int top;
       int size;

    // behaviour
    Stack (int size){
        this->size=size;
        arr = new int[size];
        top =-1;
    }
    void push(int element){
        if (size - top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<< "stack overflow"<<endl;
        }
    }
    void pop(){
        if (top >=0){
            top--;
        }
        else{
            cout<< "stack is empty/ underflow"<< endl;
        }
    }
    int peak(){
        if(top>=0 && top <size){
            return arr[top];
        }
        else{
            cout<< "stack is empty"<< endl;
            return -1;
        }
    }
    bool isempty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){
    Stack stc(5);
    stc.push(11);
    stc.push(7);
    stc.push(32);
    stc.push(11);
    stc.push(7);
    stc.push(32);
    cout<< stc.peak()<< endl;
    stc.pop();
    cout<< stc.peak()<< endl;
}