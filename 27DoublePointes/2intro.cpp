#include<iostream>
using namespace std;
int main(){
    /*
    int first=8;
    int second =18;
    int *ptr=&second;
    */
    // *ptr=9;
    // cout<< first <<"   "<< second<< endl; // 8 9 will be printed ---> 1


    // 2
    /*
    int *q=ptr;
    (*q)++;
    cout<< second << endl; // 19 will be printed   ----> 1
    */
    
    // 3
    /*
    int num=8;
    int *p=&num;
    cout<< (*p)++<<endl;  // 8
    cout<< num << endl;   // 9  ----> 1
    */

    // 4
    /*
    int *p=0;
    int first =110;
    // *p= first;  // error
    p= &first; // correct declaration
    cout<< *p << endl;
    */

    // 5
    /*
    int first =8;
    int second= 11;
    int *third=&second;
    first=*third;
    *third= *third+2;
    cout<< first<< "    " << second << "    "<< endl;  // 11 13 ---> 1
    */
    
    // 6
    /*
    float f=12.5;
    float p=21.5;
    float *ptr =&f;  
    (*ptr)++;  // f= 13.5
    *ptr=p;    // f=21.5
    cout<< *ptr << " "<< f << " "<< p<< endl;  // 21.5 21.5  21.5  ----> 1
    */

    // 7
    /*
    int arr[5];
    int *ptr;
    cout<< sizeof(arr)<< " " << sizeof(ptr) << endl;  // 20    4 or 8 (based on system) --->1
    */
    
    // 8
    /*
    int arr[]={11, 12, 13, 14};
    cout<< *(arr) << " , " << *(arr+1)<< endl; // 11 , 12  ----> 1
    */
    
    // 8, 9, 10, 11, 12
    /*
    int arr[6]={11, 12, 13, 14, 15};
    // 8
    cout<< *(arr) << " , " << *(arr+1)<< endl; // 11 , 12  ----> 1
    // 9
    cout<< arr << " "<< &arr << endl; //adress will be printed for two times ---> 1
    // 10
    cout<< (arr +1)<< endl; // address +4 --->1
    // 11
    int *p4=arr;
    cout<< p4[2] << endl; // prints element at index 2 p4[2] = *(p+2)
    // 12 
    cout<< *(arr) << " "<< *(arr +3 )<< endl; // 11, 14

    */
    // 13
    /*
    int arr[]={11, 12, 13, 14};
    int *ptr =arr++; // error since we cant update the symbol table
    cout<< *ptr << endl;
    */

    // 14
    /*
    char arr[]="abcdef";
    char *p=&arr[0];
    cout<< p << endl; // abcdef
    p++;
    cout<< p << endl;//  bcdef
    */
    // 15
    /*
    char str[]="babbar";
    char *p= str;
    cout<< str[0]<< " "<< p[0]<< endl;// b b
    */

    // 16

}