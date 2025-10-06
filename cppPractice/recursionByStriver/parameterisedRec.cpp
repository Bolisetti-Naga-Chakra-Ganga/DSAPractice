#include<iostream>
using namespace std;
int sumOfNNumbers(int n){
    if (n==0){
        return 1;
    }
    // int sum=n+sumOfNNumbers(n-1);
    int fact= n*sumOfNNumbers(n-1);
    // return sum;
    return fact;
}
int main(){
    int n;
    cin>> n;
    int sum=sumOfNNumbers(n);
    cout<< sum<< endl;
}