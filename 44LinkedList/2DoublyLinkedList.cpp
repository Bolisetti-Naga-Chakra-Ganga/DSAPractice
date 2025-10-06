// **** TOPICS COVERED **** //
// singly linked list - creating a node, insertion, deletion, finding length, travaresing in linked list, printing the node data

#include<iostream>
using namespace std;
// creating a Node
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    // constructor
    Node(int data){
        this-> data= data;
        this-> prev= NULL;
        this-> next= NULL;
    }
    ~Node(){
        int value=this->data;
        if (this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<< "memory is free for Node with data "<< value << endl;
    }
};

// To print/ traverse the linked list
void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<< temp-> data<< " ";
        temp=temp->next;
    }
    cout<< endl;
}

// To find the length
int getLength(Node* head){
    Node* temp= head;
    int length=0;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;

}

// to insert at head
void insertAtHead(Node* &head, Node* &tail, int d){
    // To insert in empty liked list
    if (head==NULL){
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;
}

//to insert at tail
void insertAtTail(Node* &head, Node* &tail, int d){
    // To insert in empty linked list
    if (tail==NULL){
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp= new Node(d);
    tail->next= temp;
    temp->prev= tail;
    tail=temp;
}

// To insert at given position
void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    if(position==1){
        insertAtHead(head, tail, d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if (temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* newNode= new Node(d);
    newNode->next= temp->next;
    newNode->next->prev= newNode;
    newNode->prev= temp;
    temp->next=newNode;  
}

// to delete any node 
void deleteNode(Node* &head,Node* &tail, int position){
    // deleting 1st node
    if (position==1){
        Node* temp= head;
        temp->next->prev= NULL; 
        head=head->next; // updating temp
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* temp=head;
    int count=1;
    while(count<position){
        temp=temp->next;
        count++;
    }
    // to delete the last node
    if (temp->next==NULL){
        temp->prev->next=NULL;
        tail=temp->prev; //updating tail
        temp->prev=NULL;
        delete temp;
        return;
    }
    temp->prev->next=temp->next;
    temp->next->prev= temp->prev;
    temp->next= NULL;
    temp->prev= NULL;
    delete temp;
}


int main(){
    /*
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<< "Length of the linked list = " <<getLength(head) << endl;
    */
    // if there is no any nodes in linked list
    Node* head= NULL;
    Node* tail= NULL;

    // *** Insertion ****//
    insertAtHead(head,tail, 11);
    // print(head);
    insertAtHead(head,tail, 17);
    // print(head);
    insertAtHead(head,tail, 47);
    // print(head);
    insertAtTail(head,tail, 35);
    // print(head);
    insertAtTail(head,tail, 13);
    // print(head);
    insertAtPosition(head, tail, 2, 27);
    // print(head);
    insertAtPosition(head, tail, 5, 64);
    // print(head);
    insertAtPosition(head, tail, 1, 72);
    print(head);
    insertAtPosition(head, tail, 9, 43);
    print(head);

    // *** Deletion *** //
    deleteNode(head, tail, 1);
    print(head);
    deleteNode(head, tail, 8);
    print(head);
    deleteNode(head, tail, 4);
    print(head);
}