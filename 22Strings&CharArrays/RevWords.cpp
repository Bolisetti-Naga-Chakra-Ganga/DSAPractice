#include<iostream>
using namespace std;
string rev(string s, int j, int i){
    while(j<i){
        swap(s[j],s[i]);
        j++;
        i--;
    }
    return s;
}
int main(){
    string s= "my name is babbar";
    int n=s.length();
    int start=0,end=0;
    for (int end=0; end<n; end++){
        if(s[end] == ' '){
            s=rev(s, start, end-1);
            start=end+1;
        }
    }
    // cout<<i<<j<<endl;
    s=rev(s, start, n-1);
    cout<<s;
}