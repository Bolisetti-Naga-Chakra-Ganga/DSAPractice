#include<iostream>
using namespace std;
char getMax(string s){
    int arr[26]={0};
    //to count no of occurances
    for (int i=0; i<s.length();i++){
        char ch=s[i];
        int index=0;
        if (ch>='a' && ch<='z'){
            index= ch-'a';
        }
        if (ch>='A' && ch<='Z'){
            index= ch-'A';
        }
        arr[index]+=1;
    }
    // to find max occurance
    int maxi=-1; // to compare the occurance
    int ans=0; // to store the uindex of max occured element
    for (int k=0; k<26;k++){
        if (maxi<arr[k]){
            ans=k;
            maxi =arr[k];
        }
    }
    char finAns = 'a'+ans;
    return finAns;
}
int main(){
    string s;
    cin>>s;
    cout<<getMax(s);
}