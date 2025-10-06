#include<iostream>
using namespace std;
//(n!)/(r!*(n-r)!)
int factorial(int a){
    int fact=1;
    for (int i=1; i<=a; i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);
    return num/den;
}
int main(){
    int n,r;
    cin>> n >>r;
    int ans=ncr(n,r);
    cout<< ans;
}