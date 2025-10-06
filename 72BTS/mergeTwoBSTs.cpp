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

void inOrderTraversal(Node* root, vector<int>& ans){
    if (root == NULL){
        return ;
    }
    inOrderTraversal(root->left, ans);
    ans.push_back(root->data);
    // cout<< root->data<< " ";
    inOrderTraversal(root->right, ans);
}

void inOrderTraversal(Node* root){
    
    if (root == NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<< root->data << " ";
    inOrderTraversal(root->right);
}
void mergeTwoSorted(vector<int> first, vector<int> second, vector<int>& ans){
    int i=0, j=0;
    int n= first.size();
    int m= second.size();
    while((i<n) || (j<m)){
        if(j==m || (i<n && first[i]<= second[j])){
            ans.push_back(first[i]);
            i++;
        }
        else{
            ans.push_back(second[j]);
            j++;
        }
    }
}
Node* constructBST(int s, int e, vector<int>& inorderVal){
    if(s>e){
        return NULL;
    }
    int mid= (s+e)/2;
    Node* root= new Node(inorderVal[mid]);
    root->left= constructBST(s, mid-1, inorderVal);
    root->right= constructBST(mid+1,e,inorderVal );
    return root;
}

int main(){
    Node* root1=NULL;
    cout<< "Enter the data to be for root 1 "<< endl;
    takeInput(root1);
    Node* root2=NULL;
    cout<< "Enter the data to be for root 2 "<< endl;
    takeInput(root2);
    // vector<int> ans;
    vector<int> first;
    inOrderTraversal(root1, first);
    vector<int> second;
    inOrderTraversal(root2, second);
    vector<int> merge;
    mergeTwoSorted(first, second, merge);
    Node* root= constructBST(0, merge.size(), merge);
    inOrderTraversal(root);
}