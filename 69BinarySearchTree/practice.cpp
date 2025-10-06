#include<iostream>
#include<queue>
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
pair<int, int> predecessorSuccessor(node *root, int key)
{
    // Write your code here.
    node* temp=root;
    int pred=-1;
    int succ=-1;
    while(temp!=NULL && temp->data !=key ){
        // if (temp->data == key){
        //     break;
        // }
        cout<< "called"<<endl;
        if(key<temp->data){
            succ=temp->data;
            temp= temp->left;
        }
        else{
            pred= temp->data;
            temp=temp->right;
        }
    }
    if (temp==NULL){
        pair<int, int> ans= make_pair(pred, succ);
        return ans;
    }
    node* leftTree= temp->left;
    while(leftTree!=NULL){
        pred= leftTree->data;
        leftTree= leftTree->right;
    }
    node* rightTree= temp->right;
    while(rightTree!=NULL){
        succ= rightTree->data;
        rightTree= rightTree->left;
    }
    pair<int, int> ans= make_pair(pred, succ);
    return ans;
}

int main(){
    node* root=NULL;
    root= buildTree(root);
    levelOrderTraversal(root);
    //6521171 56509934 899375 -1 -1 -1 9278816 8989449 -1 -1 -1
    pair<int, int> ans=predecessorSuccessor(root, 9615950);
    cout<<ans.first<< " "<< ans.second;

    /*
    if (root==NULL){
        return NULL;
    }
    vector<TreeNode<int>*> inorder;
    inorderTraversal(root, inorder);
    int n= inorder.size()-1;
    TreeNode<int>* newRoot= inorder[0];
    TreeNode<int>* currNode=inorder[0];
    currNode->left=NULL;
    for (int i=0; i<=n; i++){
        TreeNode<int>* temp= inorder[i];
        currNode->left=NULL;
        currNode->right= temp;
        currNode= temp;
    }
    inorder[n]->right=NULL;
    inorder[n]->left=NULL;
    return newRoot;
    */
    
}