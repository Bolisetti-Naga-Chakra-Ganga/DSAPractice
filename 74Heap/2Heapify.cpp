#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    // cout<<"called"<<endl;
    int largest=i;
    int left= i*2;
    int right= i*2+1;
    if (left<n && arr[largest]< arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest= right;
    }

    if (largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n){
    int size= n-1;
    while (size>0){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}
int main(){
    /*
    // int arr[]={-1, 54, 53, 55, 52, 50};
    int arr[]={-1, 8,54,14,17,7,21,57,9, 67, 69};
    int n= 11;
    for(int i=n/2; i>0; i--){
        cout<< arr[i] << endl;
        heapify(arr, n, i);
    }
    for(int i: arr){
        cout<< i << ", ";
    }
    cout<< endl;
    */
    int arr[]={-1, 69, 67, 57, 17, 54, 21, 14, 9, 8, 7};
    int n=11;
    heapSort(arr, n);
    for(int i: arr){
        cout<< i << ", ";
    }
    
}