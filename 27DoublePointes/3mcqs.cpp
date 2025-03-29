#include<iostream>
using namespace std;
void update(int *p){
    *p=(*p)*2;
}
void increment(int **ptr){
    ++(**ptr);
}
int main(){
    // 17
    /*
    int i=10;
    update(&i);
    cout<< i << endl;
    */

    //18 
    /*
    int first =110;
    int *p=&first;
    int **q=&p;
    int second=(**q)++ + 9;
    cout<< first << " "<< second << endl; // 111 119
    */

    // 19
    /*
    int first =110;
    int *p=&first;
    int **q=&p;
    int second=++(**q); // second=111, first=111
    int *r = *q;  // r points to first 
    ++(*r); // first=112
    cout<< first << " "<< second << endl;
    */

    // 20
    int num=110; 
    int *ptr =&num;
    increment(&ptr);
    cout<< num << endl;  // 111 

}