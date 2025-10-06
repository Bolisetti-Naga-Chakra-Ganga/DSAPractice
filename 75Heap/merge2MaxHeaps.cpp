#include<iostream>
#include<queue>
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
        // cout<< arr[largest] <<" " << arr[i]<< endl;
        heapify(arr, n, largest);
    }
}

int main(){
    int arr[]={4, 3, 2, 6};
}