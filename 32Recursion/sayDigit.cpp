#include<iostream>
using namespace std;
string sayDig(int n){
    string arr[]={"zero","one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static string s="";
    if(n>0){
        sayDig(n/10);
        int p= n%10;
        s+=arr[p]+" ";
    }
    return s;
}
int main(){
    string ans = sayDig(142);
    cout<< ans << endl;
}