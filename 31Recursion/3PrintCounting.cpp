#include<iostream>
using namespace std;
void print(int n){
    if (n>=0){
        cout<<" entered "<< n << endl;
        print(n-1); 
        cout<<n;
        cout<<" exit " << endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}