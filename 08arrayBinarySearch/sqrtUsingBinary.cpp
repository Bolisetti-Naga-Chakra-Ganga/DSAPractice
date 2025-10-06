#include<iostream>
using namespace std;
long long int sqarRoot(int num){
    int s=0;
    int e=num;
    long long int m=s+(e-s)/2;
    long long int ans;
    while(s<e){
        long long int p=m*m;
        if (p==num){
            return m;
        }
        if (p<num){
            ans=m;  //edge condition that i neglected
            s=m+1;
        }
        else{
            e=m-1;
        } 
        m=s+(e-s)/2;       
    }
    return ans;

}

double morePrecision(int n, int prec, int temp){
    double fact=1;
    double ans=temp;
    for (int i=0; i<prec; i++){
        fact=fact/10;
        for(double j=ans; j*j<n; j=j+fact){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int num;
    cin>> num;
    int ans1=sqarRoot(num);
    // cout<<ans1<<endl;
    cout<<morePrecision(num,3, ans1)<<endl;
}