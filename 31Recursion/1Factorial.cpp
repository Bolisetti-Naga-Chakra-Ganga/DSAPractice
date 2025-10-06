#include<iostream>
using namespace std;
int fact(int n){
    if (n==0){
        return 1;
    }
    // int temp=fact(n-1);
    // int ans=n*temp;
    return (n * fact(n-1));
}
int main(){
    int n;
    cin>> n;
    int ans=fact(n);
    cout<< ans;
}