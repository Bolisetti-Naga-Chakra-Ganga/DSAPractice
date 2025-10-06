// **** TOPICS COVERED **** //
// Singly linked list- creating a node, insertion(At Head, at tail, at given position), deletion, traversing in liked list, printing the data, 

#include<iostream>
#include<map>
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
    // deconstructor 
    ~Node(){
        int value=this->data;
        if (this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<< "memory is free for Node with data "<< value << endl;
    }
};


// to print the linked list elements
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp= temp->next;
    }
    cout<< endl ;
}

// To insert at Head
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d); // creating a new node
    temp->next= head; // updating the address of the next node at the new node next
    head = temp; // updating Head
}

// To insert at Tail
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next= temp;
    tail = tail->next;
    
}

// to insert at given postion
void insertAtPosition(Node* &tail,Node* &head, int position ,int d){
    // insert at head 
    if (position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp= head;
    int count=1;
    while(count<position-1){
        temp= temp->next;
        count++;
    }
    // inserting at tail
    if(temp->next ==NULL){
        insertAtTail(tail, d);
        return;
    }
    // insert at any middle position
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;
    
}

// to delete any node 
void deletion(Node* &head,Node* &tail, int position){
    // deleting 1st node
    if (position==1){
        Node* temp= head; 
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* prev=NULL;
    Node* curr=head;
    int count=1;
    while(count<position){
        prev=curr;
        curr= curr->next;
        count++;
    }
    // to delete the last node
    if (curr->next==NULL){
        prev->next=NULL;
        tail=prev;
        delete curr;
        return;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

// loop detection function using map
int main(){
    Node* node1=new Node(10); // since the class name is Node we are using Node* here
    // cout<< node1->data<< endl;
    // cout<< node1->next<< endl;
    Node* head=node1;
    Node* tail=node1;
    // print(head);
    insertAtHead(head, 12);
    insertAtHead(head, 14);
    // print(head);
    
    insertAtTail(tail, 24);
    // print(head);
    insertAtTail(tail, 18);
    // cout<< "Before adding a node at nth position"<< endl;
    // print(head);
    
    insertAtPosition(tail,head, 3, 17);
    insertAtPosition(tail,head, 1, 19);
    print(head);
    deletion(head,tail, 1);
    print(head);
    deletion(head,tail, 7);
    print(head);
    deletion(head,tail, 4);
    print(head);
    // to make a loop in sigly linked list
    print(head);
    cout<< "head "<< head->data<< "  ";
    cout<< "tail "<< tail->data<<endl;
}
