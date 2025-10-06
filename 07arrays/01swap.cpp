#include<iostream>
using namespace std;
int printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
void sortArr(int arr[], int n){
    int left=0, right=n-1;
    // cout<<"called"<< left<< right;
    while(left<right){
        while (arr[left]==0 && (left<right)){
            left++;
        }
        while (arr[right]==1 && (left<right)){
            right--;
        }
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[14]={0, 0,1,0,1,0,1, 1, 0, 0, 0, 1, 1, 0}; 
    
    /*
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"8";
    */
    
    sortArr(arr, 14);
    for (int i=0;i<14;i++){
        cout<< arr[i]<< ' ';
    }
    // printArr(arr,8);
    // return 0;
}