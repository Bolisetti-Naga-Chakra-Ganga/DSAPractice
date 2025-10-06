// tc= O(n), sc= O(n)
#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this-> data= data;
        this-> next= NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp= temp->next;
    }
    cout<< endl ;
}
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d); 
    temp->next= head; 
    head = temp; 
}
Node* reverse(Node* &head, int k){
    // basecase 
    if (head == NULL){
        return head;
    }
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(count<k && curr !=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    // recursive statement
    if (next != NULL){
        head->next=reverse(curr,k);
    }
    // return statement
    return prev;
}
int main(){
    Node* node1=new Node(7);
    Node* head=node1;
    Node* tail=node1;
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    // print(head);
    head=reverse(head,2);
    print(head);
}