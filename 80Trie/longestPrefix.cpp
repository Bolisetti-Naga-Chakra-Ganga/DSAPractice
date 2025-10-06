#include<iostream>
using namespace std;
string longestPrefix(string arr[]){
    int count=0;
    string ans="";
    for (int i=0; i<arr[0].size(); i++){
        char ch= arr[0][i];
        bool match= true;
        for(int j=1; j<5; j++){
            if (arr[j][i] != ch){
                match= false;
                break;
            }
        }
        if (match == false){
            break;
        }
        else{
            ans+=ch;
            count++;
        }
    }
    return ans;
}
int main(){
    string arr[]={"coding","coders","codingNinjas","code","codes" };
    string prefix= longestPrefix(arr);
    cout<< prefix<< endl;
}