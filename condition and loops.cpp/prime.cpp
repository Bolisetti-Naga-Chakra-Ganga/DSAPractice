#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    int k=0;
    while(i<n){
        if(n%i==0){
            k=k+1;
            
        }
        i=i+1;
    }
    if (k==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
        
    }
}