#include<iostream>
using namespace std;
class Hero{
    // char name[100];
    int rank;
    // char level;
};
int main(){
    // creating an object
    Hero h1;
    cout<< "size: "<< sizeof(h1)<< endl; // size will be equal to size of variables declared in class. since hero class contains int rank, size of h1 will be 4.
    // for empty class object size will be 1.  
    return 0;

}