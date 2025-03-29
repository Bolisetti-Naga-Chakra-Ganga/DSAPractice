#include<iostream>
using namespace std;
int& funct(int a){
    int num=a;
    int& ans=num;
    return ans;
}
int* fun(int n){
    int* ptr=&n;
    return ptr;
}
void update(int &p){
    p++;
}
int main(){
    /*
    int i=5;
    int &j = i;
    cout<< i << endl;
    i++;
    cout<< i << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl;
    */

    int n=5;
    int &r=n;
    // cout<< " befor update"<< n<< endl;
    // update(r);
    // cout<< " after update"<< n<< endl;
    funct(n); // shows an error 
    fun(n);  // shows an error

    /*
    int j=funct(n);
    cout<< j << endl;
    int *p=fun(n);
    cout<<*p << endl;
    */
    
    
}