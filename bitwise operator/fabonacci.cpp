#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" ";
    for (int i=1;i<n;i++){
        int sum=a+b;
        cout<< sum<< " ";
        a=b;
        b=sum;
    }

    // bool isprime=1;
    // for (i=2;i<(n/2);i++){
    //     if (n%i==0){
    //         // cout<< "not a prime num";
    //         isprime=0;
    //         break;
    //     }
    // }
    // if(isprime==0){
    //     cout<<" not a prime num ";
        
    // }
    // else{
    //     cout<<" prime num";
    // }

}