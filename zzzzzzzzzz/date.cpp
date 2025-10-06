#include<iostream>
using namespace std;
string corr(string s){
    string s1 = "00:00:00";
    string s2 = "00:00:00";
    for (int i=0;i<8;i++){
        if (s[i]== '@'){
            if (i==3 || i== 6){
                s1[i]='0';
                s2[i]='5';
            }
            else if(i==4 || i==7){
                s1[i]='0';
                s2[i]='9';
            }
            else if(i==0){
                s1[i]='0';
                s2[i]='2';
            }
            else if (i==1){
                s1[i]='0';
                s2[i]='3';
            }
        }
        else{
            s1[i]=s[i];
            s2[i]=s[i];
        }
    }
    return (s1,s2);
    // cout<<s1<<endl;
}
int main(){
    string s;
    cin>>s;
    cout<<corr(s);
    // cout<<s;

}