#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    if(n==0 || n==1){
        return;
    }
    int minIndex=0;
    for (int i=0; i<n; i++){
        if (arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    swap(arr[0], arr[minIndex]);
    selectionSort(arr+1, n-1);
}
int main(){
    int arr[8]={1,5,12,7,2,9,3,6};
    int size=8;
    selectionSort(arr, size);
    for (int i=0; i<size; i++){
        cout<< arr[i]<< endl;
    }
}