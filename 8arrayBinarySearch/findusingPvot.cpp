#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;  //edge condition for enteger limit exceeded
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        // right part
        else if (key > arr[mid]){
            start=mid+1;
        }
        //left part
        else{
            end=mid-1;
        }
        mid= (start+end)/2;
    }
    return -1;
}

int Pivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;  //edge condition for enteger limit exceeded
    while(start<end){
        if (arr[mid] > arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[9]={9,11,12,16,17,3,5,6,7};
    int n=9;
    int k=5;
    int pivot=Pivot(arr,9);
    if (k>=arr[pivot]&& k<arr[n-1]){
        cout<<binarySearch(arr,pivot,n-1,k);
    }
    else{
        cout<<binarySearch(arr,0,pivot,k);
    }
    
}