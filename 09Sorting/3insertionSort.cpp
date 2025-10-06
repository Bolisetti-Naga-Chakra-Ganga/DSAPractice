
#include<iostream>
using namespace std;
int main(){
    int arr[10]={45,27,76,2,56,23,9,12,34,8};
    int n=10;
    for (int i=1;i<n; i++){
        int temp=arr[i];
        int j=i-1;
        for (j=i-1; j>=0; j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for (int k=0; k<n; k++){
        cout<<arr[k]<<endl;
    }
}