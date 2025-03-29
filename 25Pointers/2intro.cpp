#include<iostream>
using namespace std;
int main(){
    // int num=5;
    // int *p=&num;
    // (*p)++;
    // cout<<num<<endl;
    // cout<<&(*p)<<endl;
    // cout<<&num;
    /*
    // copying pointer 
    int *q=p; 
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    */
    // important concept
    int i=3;
    int *t=&i;
    cout<< *t <<endl;
    *t++;
    cout<< (*t)++ <<endl;
    cout<< *t <<endl;
    *t=*t +1;
    cout<< *t <<endl;
    // cout<< " before t"<< t<<endl;
    // t=t+1;  //address will be increased by 4 bits for integer pointer.
    // cout<< " after t"<< t<<endl;
}