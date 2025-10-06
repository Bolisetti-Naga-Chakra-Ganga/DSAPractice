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
    void lcp(string word, string& ans, int size){
        trieNode* child= root;
        for (int i=0; i<size; i++){
            if (child->count==1){
                ans.push_back(word[i]);
                int ind= word[i]-'a';
                child= child->children[ind];
            }
            else{
                break;
            }
        }
    }
};

string longestPrefix(string arr[]){
    Trie* t= new Trie();
    for (int i=0; i<5;i++){
        t->insertWord(arr[i]);
    }
    string first=arr[0];
    string ans="";
    t->lcp(first, ans, 6);
    return ans;
}
int main(){
    string arr[]={"coding","coders","codingNinjas","code","codes" };
    string prefix= longestPrefix(arr);
    cout<< prefix << endl;
}