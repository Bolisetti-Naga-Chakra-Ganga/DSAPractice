#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        cout<<i<<endl;
        sum=sum+i;
        i=i+1;
    }
    cout<< sum<<endl;
    // while(n>=1){
    //     cout<<n<<endl;
    //     n=n-1;
    // }
    
}