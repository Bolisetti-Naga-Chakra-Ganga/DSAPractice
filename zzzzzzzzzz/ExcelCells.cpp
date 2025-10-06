#include<iostream>
using namespace std;
int main(){
    string s="language";
    // cin>>s;
    string ans;
    int k=1;
    for (int i=0;i<s.length();i++){
        if (s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            // to conver a num to string we use std::to_string(integer)
            ans+=(std::to_string(k));
            k+=1;
        }
        else{
            ans+=s[i];
        }
    }
    // to reverse the string 
    // cout<<ans;
    int len=ans.length();
    int n=len-1;
    for(int i=0;i<(len/2);i++){
    //Using the swap method to switch values at each index
    swap(ans[i],ans[n]);
    n = n-1;
  }
    cout<<ans;
}