#include<iostream>
using namespace std;

bool isPossible(int arr[], int mid, int req){
    int sum=0;
    for (int j=0;j<5 ;j++){
        
        if (arr[j]>mid){
            sum=sum+(arr[j]-mid);
        }
        if (sum>=req){
            // cout<<"called"<<endl;
            return true;
        }
    }
    // cout<<"sum = "<<sum<<endl;
    return false;

}


int main(){
    int arr[5]={4, 42, 40, 26, 46};
    int req;
    cin>>req;
    int maxi=0;
    for (int i=0;i<5;i++){
        maxi=max(arr[i],maxi);
    }
    int start=0; 
    int end=maxi;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        // cout<<mid<<endl;
        if (isPossible(arr,mid,req)){
            start=mid+1;
            ans=mid; 
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    cout<<ans;

}