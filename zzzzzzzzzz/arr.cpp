#include<iostream>
using namespace std;
int main(){
    int arr[8]={3, 6, 2, 7, 4, 9, 5, 8}; 
    int arr2[8]={0};
    for (int i=0; i<8; i++){
        int n=arr[i];
        arr2[n-1]=1;
    }
    for (int j=0; j<8; j++){
        if (arr2[j]==0){
            cout<<(j+1);
        }
    }
    
}