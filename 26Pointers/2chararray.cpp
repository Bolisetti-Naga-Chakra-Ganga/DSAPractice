#include<iostream>
using namespace std;
int main(){
    int arr[10]={};
    int *p=&arr[0];
    /*
    cout<< p <<endl; // prints address of 1st element of array
    cout<< *p <<endl; // prints value at that address
    cout<< &p <<endl; // prints the address of pointer p
    */
    char ch[6]="abcde";
    // cout<<arr<<endl; // prints the address of element of 1st index of array
    // cout<<ch <<endl; // prints the char array i.e. abcde

    char *c =&ch[0];
    // behaviour of cout is different for char array 
    /*
    cout<< c <<endl; // prints the entire string
    cout<< *c <<endl; // prints 1st element
    cout<< &c <<endl; // prints address 
    */

    char temp ='z';
    char *q=&temp;
    // cout<< q << endl;
    char *c2="abcde"; // **** it is not preffered ****

    return 0;
}