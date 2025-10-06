#include<iostream>
using namespace std;
void reverseArr(int arr[], int start, int end){
    if (start >= end){
        return;
    }
    // cout<< arr[start] << arr[end] << endl;
    swap(arr[start], arr[end]);
    reverseArr(arr, start+1, end-1);
}

int main(){
    int arr[]={13,54, 45, 25, 56, 23, 45, 67, 78};
    for (auto i: arr){
        cout<< i<< " ";
    }
    cout<< endl;
    cout<< endl;

    int n= 8;
    // cout<< n <<endl;

    reverseArr(arr, 0, n);
    for (auto i: arr){
        cout<< i<< " ";
    }

}