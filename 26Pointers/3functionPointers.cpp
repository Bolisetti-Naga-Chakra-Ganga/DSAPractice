#include<iostream>
using namespace std;
void print(int *p){
    cout<< p<< endl;  // address of value 
    cout<< *p<< endl; // value at p
    cout<< &p<< endl; // address
}
void update(int *p){
    *p=*p+1;
    // p=p+1; 
    // cout<< "inside "<< p<< endl;
}
int main(){
    int value =5;
    int *p=&value;
    cout<<"value at p before update "<< *p << endl;
    // cout<<"address before update "<<p<<endl;
    // print(p);
    update(p); // value at pointer will be updated but p won't be updated
    // cout<<"address after update "<<p<<endl;
    cout<<"value at p after update "<< *p << endl;
}