#include<iostream>
using namespace std;
class trieNode{
    public:
    trieNode* children[26];
    int count;
    char data;
    bool isTerminal;

    trieNode(char ch){
        data= ch;
        data= ch;
        for (int i=0; i<26; i++){
            children[i]=NULL;
        }
        isTerminal= false;
        count=0;
    }
};
class Trie{
    public:
    trieNode* root;
    Trie(){
        root= new trieNode('\0');
    }

    void insertUtil(trieNode* root , string word){
        if (word.length()== 0){
            root->isTerminal =true;
            return;
        }
        int ind= word[0]-'a';
        trieNode* child=NULL;
        if (root->children[ind] != NULL){
            child= root->children[ind];
        }
        else{
            child= new trieNode(word[0]);
            root->count++;
            root->children[ind]= child;
        }
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }
};
void printContacts(trieNode* root, string& ans){
    if (root->count ==0 && root->isTerminal){
        cout << ans<< " ";
        return;
    }
    if (root->isTerminal){
        cout<< ans << " " ;
    }
    for(int i=0; i<26; i++){
        if (root->children[i]!= NULL){
            char ch= root->children[i]->data;
            ans.push_back(ch);
            printContacts(root->children[i], ans);
            ans.pop_back();
        }
    }
}

void directory(string name, trieNode* root, int index){
    string ans= name;
    trieNode* child= root;
    for(int i=0; i<index; i++){
        int index= name[i]-'a';
        if (child->children[index]==NULL){
            cout<< "Contact Not Found"<< endl;
            return;
        }
        else{
            child= child->children[index];
        }
    }
    printContacts(child, ans);
}

int main(){
    Trie* t= new Trie();
    trieNode* root= t->root;
    string arr[]={"coding","coders","codingNinjas","code","codes" };
    for (int i=0; i<5;i++){
        t->insertWord(arr[i]);
    }
    string name="";
    int i;
    cout<< "endter the length of the string"<< endl;
    cin>> i;
    cout<< "enter the name to be searched"<< endl;
    for (int j=0; j<i; j++){
        char ch ;
        cin >> ch;
        name.push_back(ch);
        directory(name, root, j+1);
        cout<< endl;
    }
}