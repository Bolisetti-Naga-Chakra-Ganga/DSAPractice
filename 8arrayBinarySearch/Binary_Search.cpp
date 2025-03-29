//  TIME COMPLEXITY : O(log N)
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
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

int main(){
    int even[6]={1, 4, 7, 9, 11, 17};
    int odd[9]={4,7,9,10,15,27,33,56,62};
    // int index=binarySearch(even,6,11);
    // cout<<"index of 11 is"<< index<< endl;
    int index2=binarySearch(odd,9,27);
    cout<<"index of 27 is"<< index2<< endl;
}