#include<iostream>
using namespace std;

int Pivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;  //edge condition for enteger limit exceeded
    while(start<end){
        /*
        if ((arr[mid]< arr[mid-1]) && (arr[mid]<arr[mid+1])){
            // return mid;
            return arr[mid];
        }
        */
        // right part
        if (arr[mid] > arr[0]){
            start=mid+1;
        }
        //left part
        else{
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[9]={9,11,12,16,17,3,5,6,7};
    int index=Pivot(arr,9);
    // cout<<"index of peak elem is"<< index<< endl;
    cout<<"Pivot elem is "<< index<< endl;

}