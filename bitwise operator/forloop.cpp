#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for (int i=0;i<=n;i++){
    //     cout<< i<<endl;
    // }
    // for (int a=0, b=1;a>=0 && b>=0;a--,b--){
    //     cout<<a<<" "<<b<<endl;
    // }
    
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    cout<< sum<< endl;

}