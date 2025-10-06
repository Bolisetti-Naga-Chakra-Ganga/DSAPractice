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

void levelOrderTraversal(Node* root){
    cout<< "Level order traversal "<< endl;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
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

// inorder traversal
void inOrderTraversal(Node* root){
    
    if (root == NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<< root->data << " ";
    inOrderTraversal(root->right);
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

// preOrder traversal
void preOrderTraversal(Node* root){
    if (root == NULL){
        return ;
    }
    cout<< root->data<< " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

//postOrder traversal
void postOrderTraversal(Node* root){
    
    if (root == NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<< root->data<< " ";
}


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
int searchInBST(Node* root, int n){
    if (root==NULL){
        return -1;
    }
    if (root->data== n){
        return 1;
    }
    int ans=-1;
    if (root->data < n){
        ans= searchInBST(root->right, n);
    }
    else{
        ans= searchInBST(root->left, n);
    }
    return ans;
}
Node* minVal(Node* root){
    if (root->left==NULL){
        return root;
    }
    return minVal(root->left);

}
Node* maxVal(Node* root){
    if (root->right==NULL){
        return root;
    }
    return maxVal(root->right);
}
Node* deleteNode(Node* root, int val){
    if (root == NULL){
        return root;
    }
    if (root->data == val){
        if (root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL){
            Node* temp= root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL){
            Node* temp= root->right;
            delete root;
            return temp;
        }
        else if (root->left != NULL && root->right != NULL){
            int mini= minVal(root->right)->data;
            root->data= mini;
            deleteNode(root->right, mini);
            return root;
        }
    }
    if (root ->data > val){
        root->left =deleteNode(root->left, val);
        return root;
    }
    else if (root->data < val){
        root->right =deleteNode(root->right, val);
        return root;
    }
}
int main(){
    Node* root=NULL;
    cout<< "Enter the data to be "<< endl;
    // 10 8 21 7 27 5 4 3 -1
    
    takeInput(root);
    vector<int> ans;
    inOrderTraversal(root, ans);
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<< endl;
    }
    /*
    levelOrderTraversal(root);
    cout<< endl;
    */
    /*
    cout<< "Pre order travresal  --> ";
    preOrderTraversal(root);
    cout<< endl;
    cout<< "Post order travresal --> ";
    postOrderTraversal(root);
    cout<< endl;
    cout<< "In - order travresal --> ";
    inOrderTraversal(root);
    int n;
    cin>> n;
    int ans=searchInBinarySearchTree( root, n);
    */
   // 50 20 70 10 30 90 110 -1
//    root=deleteNode(root, 20);
//    levelOrderTraversal(root);
}