// time complexity =O(n), space complexity= O(1)
#include<iostream>
#include<map>
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
    ~Node(){
        int value=this->data;
        if (this->next != NULL){
            delete next;
            this->next=NULL;
        }
        // cout<< "memory is free for Node with data "<< value << endl;
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
void removeDuplicate(Node* &head){
    // empty list
    if (head==NULL){
        return ;
    }
    Node* curr= head;
    while(curr != NULL){
        if (curr->next != NULL && curr->data == curr->next->data ){
            Node* nodeto= curr->next;
            curr->next=curr->next->next;
            nodeto->next=NULL;
            delete(nodeto);
        }
        else{
            // cout<< curr->data<<" "<<curr->next->data <<endl;
            curr= curr->next;
        }
    }
}
void removeDuplicatesUnsorted(Node* &head){
    map<int , bool> visited;
    Node* curr=head;
    visited[curr->data]=true;
    while(curr!=NULL){
        // int value= curr->next->data; 
        if (visited[curr->next->data] == true){
            Node* temp= curr->next;
            curr->next=temp->next;
            temp->next=NULL;
            delete(temp);
        }
        else{
            visited[curr->next->data]=true;
            curr=curr->next;
        } 
    }
}

int main(){
    Node* node1=new Node(7);
    Node* head=node1;
    Node* tail=node1;
    insertAtHead(head, 7);
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    // removeDuplicate(head);
    // print(head);
}