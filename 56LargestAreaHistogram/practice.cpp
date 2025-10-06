#include<iostream>
using namespace std;
int getmex(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if (arr[i]!= i){
            cout<< i<< endl;
            count+=1;
        }
    }
    return count;
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for (int i=0; i<n; i++){
        int k;
        cin>> k;
        arr[i]=k;
    }
    int ans= getmex(arr, n);
}


