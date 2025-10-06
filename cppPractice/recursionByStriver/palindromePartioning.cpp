#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(string str, int start, int end){
    int st=start;
    int en=end;
    while(st<=en){
        if (str[st]!=str[en]){
            return false;
        }
        st++;
        en--;
    }
    return true;
}
void partion(string str, vector<vector<string>>& ans, vector<string> path, int index){
    if (index==str.length()){
        // if (isPalindrom(temp)){

        // }
        ans.push_back(path);
        return;
    }
    for(int i=index; i<str.size();i++){
        if (isPalindrome(str, index, i)){
            path.push_back(str.substr(index, i-index+1));
            partion(str, ans, path, i+1);
            path.pop_back();
        }
    }
}
int main(){
    string str;
    cout<< "Enter the string "<< endl;
    cin>>str;
    vector<string> path;
    vector<vector<string>> ans;
    partion(str, ans, path, 0);
    for(auto i:ans){
        cout<< "[";
        for(auto j:i){
            cout<< j<<" ";
        }
        cout<<"]"<<endl;
    }
}