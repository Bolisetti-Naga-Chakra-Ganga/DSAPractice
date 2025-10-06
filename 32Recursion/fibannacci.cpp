#include<iostream>
using namespace std;
int fibbonacci(int a, int b, int n, int count){
    if(count==n){
        return a+b;
    }
    int temp=b;
    int ans=fibbonacci(b,a+b,n,count+1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a=0, b=1;
    int count=2;
    int ans=fibbonacci(a,b,n, count);
    cout<<ans;
}