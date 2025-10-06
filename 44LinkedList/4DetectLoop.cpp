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
    Node* temp=new Node(d); // creating a new node
    temp->next= head; // updating the address of the next node at the new node next
    head = temp; // updating Head
}
// loop detection function using map
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp= head;
    while(temp!=NULL){
        if (visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){
    if (head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow != NULL && fast != NULL){
        fast= fast->next;
        if (fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if (slow == fast){
            cout<< slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* getStartingNode(Node* head){
    Node* intersection= floydDetectLoop(head);
    Node* slow= head;
    while(slow!= intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
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
    print(head);
    Node* link=head->next;
    tail->next=link->next->next;
    // tail->next=head->next;
    // Node* temp=floydDetectLoop(head);
    // cout<< temp->data<< endl;
    Node* temp1=getStartingNode(head);
    cout<< temp1->data<< endl;

}