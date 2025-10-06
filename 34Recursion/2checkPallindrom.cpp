#include<iostream>
using namespace std;
bool checkPallin(string s, int i, int j){
    int size=s.length()-1;
    size=size-i;
    // cout<< i << size << endl;
    // in place of size we can directly use j. 
    if (i>=(size)){
        return true;
    }
    if (s[i]!=s[size]){
        return false;
    }
    else{
        // bool ans=checkPallin(s, i+1, j-1);
        // return ans;
        return(checkPallin(s, i+1, j-1));
    }
}
int main(){
    string s= "babbab";
    bool ans=checkPallin(s, 0, 5);
    cout<< ans << endl;
}