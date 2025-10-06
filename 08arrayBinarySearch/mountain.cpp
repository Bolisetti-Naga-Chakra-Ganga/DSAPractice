#include<iostream>
using namespace std;

int binarySearch(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;  //edge condition for enteger limit exceeded
    while(start<end){
        if ((arr[mid]> arr[mid-1]) && (arr[mid]>arr[mid+1])){
            // return mid;
            return arr[mid];
        }
        // right part
        else if (arr[mid] < arr[mid+1]){
            start=mid+1;
        }
        //left part
        else if(arr[mid]> arr[mid+1]){
            end=mid-1;
        }
        mid= (start+end)/2;
    }
    return -1;
}

int main(){
    int arr[9]={4,7,9,10,22,17,9,6,2};
    int index=binarySearch(arr,9);
    // cout<<"index of peak elem is"<< index<< endl;
    cout<<"Peak elem is"<< index<< endl;

}