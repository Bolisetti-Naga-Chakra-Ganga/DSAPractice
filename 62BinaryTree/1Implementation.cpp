#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
node* buildTree(node* root){
    cout<< "Enter the data: "<< endl;
    int data;
    cin>> data;
    root= new node(data);
    if (data==-1){
        return NULL;
    }
    cout<< "data for inserting in left of "<< root->data;
    root->left=buildTree(root->left);
    cout<<"data for inserting in right of "<< root->data;
    root->right=buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if (temp==NULL){
            cout<< endl;
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data<< " ";
            if(temp->left){
            q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
        
    }
}
void reverseLevelOrderTraversal(node* root){
    queue<node* > q;
    stack<node* > s;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        s.push(temp);
        if (temp->right){
            q.push(temp->right);
        }
        if (temp->left){
            q.push(temp->left);
        }
    }
    while(!s.empty()){
        node* temp=s.top();
        s.pop();
        cout<< temp->data<<" ";
    }
}

// inorder traversal
void inOrderTraversal(node* root){
    if (root == NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<< root->data<< " ";
    inOrderTraversal(root->right);
}

// preOrder traversal
void preOrderTraversal(node* root){
    // print the node ---> go for child nodes
    if (root == NULL){
        return ;
    }
    cout<< root->data<< " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

//postOrder traversal
void postOrderTraversal(node* root){
    if (root == NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<< root->data<< " ";
}
node* buildFromLevelOrder(node* &root){
    queue<node*> q;  
    cout<< "Enter data for root"<< endl;
    int data;
    cin>> data;
    root=new node(data);
    // cout<< q.front()<< endl;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<< "enter data for left: "<< temp->data<< endl;
        int leftdata;
        cin>> leftdata;
        if (leftdata!= -1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<< "enter right node for: "<< temp->data<< endl;
        int rightdata;
        cin>>rightdata;
        if (rightdata !=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root=NULL;
    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    
    // 1 3 5 7 17 -1 -1 -1 -1 -1 -1 

    
    root= buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // reverseLevelOrderTraversal(root);
    /*
    // levelOrderTraversal(root);
    inOrderTraversal(root);
    cout<< endl;
    preOrderTraversal(root);
    cout<< endl;
    postOrderTraversal(root);
    */
}