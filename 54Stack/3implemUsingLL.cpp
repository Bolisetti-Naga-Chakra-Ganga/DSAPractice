#include<iostream>
using namespace std;
class Node{
    public:
       int data;
       Node* next;

    // constructor
    Node(int data){
        this-> data= data;
        this-> next= NULL;
    }
    ~Node(){
        if (this->next != NULL){
            delete next;
            this->next=NULL;
        }
    }
};

class Stack{
    // propetries
    public:
       Node* top;

    // constructor to create a new stack
    Stack(){
        top=NULL;
    }

    // to push a new element into stack
    void push(int element){
        Node* temp= new Node(element);
        if (top==NULL){
            top=temp;
        }
        else{
            temp->next=top;
            top=temp;
        }
    }

    // to remove top element
    void pop(){
        if(top==NULL){
            cout<< "Stack is already empty"<< endl;
        }

        else{
            Node* temp=top;
            top=top->next;
            temp->next=NULL;
            delete temp;
        }
    }

    // to return the top element
    int peak(){
        if(top!=NULL){
            return(top->data);
        }
        else{
            cout<< "Stack is underflow"<< endl;
        }
    }

    // to fine is it emptyor not
    bool isEmpty(){
        if (top == NULL){
            return true;
        }
        return false;
    }
};


int main(){
    Stack st;
    st.push(11);
    st.push(97);
    st.push(82);
    st.push(67);
    st.push(56);
    cout<< st.peak()<< endl;
    st.pop();
    cout<< st.peak()<< endl;
}