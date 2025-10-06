#include<iostream>
#include<vector>
using namespace std;
void keyPad(string digits, string mapping[], vector<string> &ans, int index, string output){
    if (index >= digits.size()){
        ans.push_back(output);
        return;
    }
    int num= digits[index]- '0';
    string value= mapping[num];
    for(int i=0; i<value.size(); i++){
        // cout<< "index = " << index << ", i is = "<< i<< endl;
        // cout<< "value[i]" << value[i] << endl;
        output.push_back(value[i]);
        keyPad(digits, mapping, ans, index+1, output);
        output.pop_back();
    }
}

int main(){
    string mapping[10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string digits;
    cin>> digits;
    int index=0;
    string output="";
    keyPad(digits, mapping, ans, index, output);
    cout<< endl;
    for (string i:ans){
        cout<<i<<" ";
    }cout<<endl;
}