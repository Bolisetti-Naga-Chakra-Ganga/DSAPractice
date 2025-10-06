#include<iostream>
using namespace std;
void rev(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }
}

void alter_rev(int arr[], int n){
    int start=0;
    int end=1;
    // while(end<=n){
    //     swap(arr[start],arr[end]);
    //     start+=2;
    //     end+=2;
    // }
    for(int i=0; i<n; i+=2){
        if (i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    rev(arr, n);
    // alter_rev(arr, n);
    for (int i=0;i<n;i++){
        cout<< arr[i]<< ' ';
    }
}