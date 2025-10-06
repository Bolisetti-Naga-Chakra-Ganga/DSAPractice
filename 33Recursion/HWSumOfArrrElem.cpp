#include<iostream>
using namespace std;
int sumOfArrayElements(int arr[], int size){
    if (size==0){
        return 0;
    }
    return(arr[size-1]+sumOfArrayElements(arr, size-1));
}
int main(){
    int arr[5]={2, 6, 7, 8, 11};
    int size=5;
    cout<< sumOfArrayElements(arr, size)<< endl;
}