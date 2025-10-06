
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0, i=0;
    // while(n!=0){
    //     int bit=n%2;
    //     ans=bit*pow(10,i)+ans;
    //     i+=1;
    //     n=n>>1;
    // }
    // cout<< ans<<endl;
    int r;
    while(n!=0){
        r=n%10;
        n=n/10;
        ans=ans+pow(2,i);
        i+=1;
    }
    cout<< ans<<endl;
}