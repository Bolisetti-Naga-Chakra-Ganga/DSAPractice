#include<iostream>
using namespace std;
string rev(string s,int start, int end){
    if (start<end){
        swap(s[start], s[end]);
        rev(s, start+1, end-1);
    }
    return s;
}
int main(){
    string s= "bubbar";
    string ans= rev(s, 0, 5);
    cout<< ans<< endl;
}