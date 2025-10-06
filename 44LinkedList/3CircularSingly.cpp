// ***** TOPICS COVERED ***** //
// Node creation, Insertion, Deletion, Travese in linked list

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
        int value= this->data;
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<< "memory is free for Node with data "<< value << endl;
    }
    
};


// Insertion of a Node
void insertNode(Node* &tail,int element, int d){
    // empty list
    if (tail==NULL){
        Node* temp= new Node(d);
        temp->next= temp;
        tail=temp;
    }
    else{
        // Non empty list
        // Assuming at least one node exists in the linked list
        Node* curr=tail;
        while(curr->data != element){
            curr =curr->next;
        }
        // current represents the node after which we have to insert the node
        Node* newNode= new Node(d);
        newNode->next= curr->next;
        curr->next= newNode;
    }
}


// To print
void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<< temp->data<< " ";
        temp=temp->next; 
    }while(temp!= tail);

    cout << endl;
}


//Deletion of Node
void deleteNode(Node* &tail, int value){
    if (tail==NULL){
        cout<< "list is already empty"<< endl;
        return;
    }
    Node* prev=tail;
    Node* curr=tail->next;
    // when more than single node exists
    while(curr->data != value){
        prev= curr;
        curr = curr->next;
    }
    prev->next= curr->next;
    curr->next= NULL;
    // if only single node exists
    if (prev == curr){
        tail=NULL;
    }
    // if deleting node is tail
    if (curr == tail){
        tail= prev;
    }
    delete curr;        
}

int main(){
    Node* tail= NULL;
    // inserting in empty list
    insertNode(tail, 5, 3);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    
    /*
    insertNode(tail, 3, 8);
    print(tail);
    insertNode(tail, 8, 11);
    print(tail);
    insertNode(tail, 3, 77);
    print(tail);
    insertNode(tail, 77, 44);
    print(tail);
    deleteNode(tail,11);
    print(tail);
    */
    // cout<< tail->data<< endl;
}