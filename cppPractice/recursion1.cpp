#include<iostream>
using namespace std;
void printName(string name, int n){
    if (n==0){
        return;
    }
    cout<<name<< endl;
    printName(name,n-1);
}
void printNum(int n){
    if (n==0){
        return;
    }
    // cout<<n<< endl;
    printNum(n-1);
    cout<< n<< endl;
}
int main(){
    int n;
    // string name;
    // cout<<"Enter your name"<< endl;
    // getline(cin, name);
    // cout<< "How many times you would like to print"<< endl;
    cin>>n;
    // printName(name, n);
    printNum(n);
}