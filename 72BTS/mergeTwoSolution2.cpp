#include<iostream>
#include <queue>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int n){
        this->data=n;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertBST(Node* root, int data){
    if (root==NULL ){
        root= new Node(data);
        return root;
    }
    if (root->data < data){
        root->right= insertBST(root->right, data);
    }
    else{
        root->left= insertBST(root->left, data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>> data;
    while(data !=-1){
        root=insertBST(root, data);
        cin>>data;
    }
}

Node* convertIntoSortedDLL(Node* root, Node* &head){
    // base case
    if (root == NULL){
        return NULL;
    }
    convertIntoSortedDLL(root->right, head);
    root->right= head;
    if (head != NULL){
        head->left= root;
    }
    head= root;
    convertIntoSortedDLL(root->left, head);
    return head;
}

Node* mergeDLL(Node* head1, Node* head2){
    Node* head=NULL;
    Node* tail=NULL;
    while(head1!=NULL && head2!=NULL){
        if (head1->data < head2->data){
            if (head==NULL){
                head= head1; 
            }
            else{
                tail->right= head1;
                head1->left= tail;
            }
            tail= head1;
            head1= head1->right;            
        }
        else{
            if (head==NULL){
                head= head2;
            }
            else{
                tail->right= head2;
                head2->left= tail;
            }
            tail=head2; 
            head2 = head2->right; 
        }
    }
    if (head2!=NULL){
        tail->right= head2;
        head2->left= head2;
    }
    else if(head1 != NULL){
        tail->right= head1;
        head2->left= tail;
    }
    return head;
}
int countNodes(Node* head){
    if (head== NULL){
        return 0;
    }
    int cnt=0;
    Node* temp= head;
    while(temp !=NULL){
        cnt++;
        temp= temp->right;
    }

}
Node* sotredDLLToBST(Node* &head,int n){
    if (head== NULL || n<=0){
        return NULL;
    }
    
}

int main(){
    Node* root1=NULL;
    cout<< "Enter the data to be for root 1 "<< endl;
    takeInput(root1);
    Node* root2=NULL;
    cout<< "Enter the data to be for root 2 "<< endl;
    takeInput(root2);
    Node* head1= NULL;
    Node* head2= NULL;
    head1=convertIntoSortedDLL(root1, head1);
    head2=convertIntoSortedDLL(root2, head2);
    head1->left=NULL;
    head2->left=NULL;
    Node* head= mergeDLL(head1, head2);
    int count= countNodes(head);
    // Node* root= convertToTree();
}