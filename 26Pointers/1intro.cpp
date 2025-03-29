#include<iostream>
using namespace std;
int main(){
    // int arr[10]={2,5,6,7,85,67};
    /*
    // cout<<" address of 1st memory location is "<<arr<<endl; // arr represents the adress of 1st element of the array
    // cout<<" address of 1st memory location is "<<&arr[0]<<endl;
    cout<< "1st elem -----> "<< *arr <<endl; // represents 1st element of array
    cout<< "1st elem +1 ----> "<< *arr+1 <<endl;  // print 1st element+1 i.e. 2+1=3
    cout<< *(arr+1) <<endl; // it will print second element(element at index 1).
    cout<<arr[4]<<endl;
    cout<< *(arr+4)<< endl; // prints the element at 4th index
    cout<< 4[arr]<< endl;
    */
   /*
    int temp[10]={1,6,3,4,7,2};
    cout<< "size of temp "<< sizeof(temp)<<endl; 
    cout<< sizeof(temp)<<endl; 
    cout<< sizeof(*temp)<<endl<<endl; 
    // since size of int is 4 and array size is 10, sizeof(temp) =10*4==>40
    int *ptr =&temp[0];
    cout<<sizeof(ptr)<< endl;  // ptr===> address ==> size of pointer is : 8 or 4 (based on system)
    cout<<sizeof(*ptr)<< endl;  // *ptr ===> value at that address ==> size of int : 4
    cout<< sizeof(&ptr)<< endl;
    */

   

    /**** a = &a = & a[0] ****/
    /*
    int a[20]={1,2,3,4,5};
    
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    // int num=5;
    int *p=&a[0];
    cout<< p<< endl;
    cout<< *p<< endl;
    cout<< &p<< endl;
    */
    // 3.Content of symbol table can not be changed 
    int arr[10];
    //ERROR
    // arr=arr+1;
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr= ptr+1;  
    cout<< ptr<< endl;
}