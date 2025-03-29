#include<iostream>
using namespace std;
int isPossible(int arr[],int n, int m, int mid){
    int stdcount=1;
    int pagesum=0;
    for (int i=0; i<n; i++){
        // cout<<"called";
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            stdcount+=1;
            if(stdcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    // cout<<stdcount;
    return true;
}
int main(){
    int n, sum=0, m, s=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>> arr[i];
        sum+=arr[i];
        // cout<<sum;
    }
    cin>>m;
    int e=sum;
    int ans=-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if (isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}