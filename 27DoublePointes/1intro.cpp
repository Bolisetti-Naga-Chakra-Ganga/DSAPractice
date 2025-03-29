#include<iostream>
using namespace std;
void update(int **p2){
    // p2=p2+1;  // no change 
    *p2=*p2+1;  // value at p will be increased
    **p2=**p2+1;  // value at i will be increased
    return;
}
int main(){
    int i=5;
    int *p=&i;
    int **p2 =&p;
    /*
    cout<< " adress stored at p -->   "<< p<<endl;
    // cout<< " value stored at p -->   "<< *p<<endl;
    cout<< " adress of p -->   "<< &p<<endl;
    cout<< " adress stored at of p -->   "<< p2<<endl;  

    cout<< "value at pointer 2 --->. "<< *p2<<endl;
    cout<< "address of p2 --->    "<<&p2 <<endl;
    */
   /*
    // to print the value at i 
    cout << i << endl;
    cout<< *p << endl;
    cout<< **p2<<endl<<endl;


    // to print the address of i
    cout<< &i << endl;
    cout<< p << endl;
    cout<< *p2 << endl<<endl;;

    // to print the adress of p
    cout<< &p << endl;
    cout<< p2 << endl<<endl;
    */

    // update function analysis
    cout<< "i value before update  "<< i << endl;
    cout<< " p before update " << p<<endl;
    cout<< "p2 before update "<< p2 << endl;
    
    update(p2);
    cout<< "i value after update  "<< i << endl;
    cout<< " p after update " << p<<endl;
    cout<< "p2 after update "<< p2 << endl;

}