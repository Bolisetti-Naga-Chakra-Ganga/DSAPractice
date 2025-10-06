#include<iostream>
using namespace std;
int sumOfNum(int n){
    if (n==0){
        return 0;
    }
    return n+sumOfNum(n-1);
}
int main(){
    int n ;
    cin >> n ;
    int sum= n*(n+1)/2 ;
    int ans= sumOfNum(n) ;
    cout<< ans<< endl ;
    cout<< sum<< endl ;
}