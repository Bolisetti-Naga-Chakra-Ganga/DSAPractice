// space complexity=O(1), time complexity=O(n^2)
#include<iostream>
using namespace std;
int main(){
    int arr[10]={45,27,76,2,56,23,9,12,34,8};
    int n=10;
    // int arr[6]={1, 7, 6, 10, 9, 14};
    // int n=6;
    for (int i=0; i<n-1; i++){
        int swapped=0;
        for (int j=0; j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped+=1;
            }
            // cout<< arr[j]<< arr[ j+1];
        }
        // optimized solution
        if (swapped==0){
            // cout<<"breake";
            break;
        }
        // cout<<swapped;
    }
    for (int k=0; k<n; k++){
        cout<<arr[k]<<endl;
    }
}
