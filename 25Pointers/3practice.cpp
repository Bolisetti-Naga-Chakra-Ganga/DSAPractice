#include<iostream>
using namespace std;
int main(){
    int a=75;
    int *p= &a;
    *p++;
    cout<< a << endl;
    (*p)++;
    cout<< a << endl;
}