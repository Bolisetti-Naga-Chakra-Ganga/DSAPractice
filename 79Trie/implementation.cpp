#include<iostream>
using namespace std;
class trieNode{
    public:
    char data;
    trieNode* children[26];
    bool isTerminal;

    trieNode(char ch){
        data= ch;
        for (int i=0; i<26; i++){
            children[i]=NULL;
        }
        isTerminal= false;
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

        // Assumption : words in UpperCase
        int ind= word[0]-'A';
        trieNode* child=NULL;
        if (root->children[ind] != NULL){
            child= root->children[ind];
        }
        else{
            child= new trieNode(word[0]);
            root->children[ind]= child;
        }
        insertUtil(child, word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root, word);
    }
    bool searchUtil(trieNode* root, string word){
        if (word.length()==0){
            return root->isTerminal;
        }
        int index=word[0]-'A';
        trieNode* child=NULL;
        if (root->children[index] != NULL){
            child= root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child, word.substr(1));
    }
    bool serchWord(string word){
        return searchUtil(root, word);
    }
    void deleteUtil(trieNode* root, string word){
        if (word.length()==0){
            root->isTerminal = false;
        }
        int index=word[0]-'A';
        trieNode* child=NULL;
        if (root->children[index] != NULL){
            child= root->children[index];
        }
        else{
            return;
        }
        deleteUtil(child, word.substr(1));

    }
    void deletion(string word){
        deleteUtil(root, word);
    }
    bool prefixUtil(trieNode* root, string prefix){
        if (prefix.length()==0){
            return true;
        }
        int index=prefix[0]-'A';
        trieNode* child=NULL;
        if (root->children[index] != NULL){
            child= root->children[index];
        }
        else{
            return false;
        }
        return prefixUtil(child, prefix.substr(1));
    }

    bool startsWithPrefix(string prefix){
        return prefixUtil(root, prefix);
    }
};
int main(){
    Trie* t= new Trie();
    t->insertWord("ABCDEFG");
    
    cout<< ((t->serchWord("ABCDEFG"))? "present": "Not Present")<< endl;
    cout<< ((t->serchWord("ABCD"))? "present": "Not Present")<< endl;
    cout<< ((t->startsWithPrefix("ABCD"))? "prefix present": "Not Present")<< endl;
}