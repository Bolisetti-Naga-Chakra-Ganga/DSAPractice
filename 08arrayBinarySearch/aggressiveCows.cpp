#include<iostream>
using namespace std;
int isPossible(int stalls[],int k, int mid){
    int cowcount=1;
    int lastpos=stalls[0];

}


int main(){
    int n, maxi=-1, k, s=0;
    cin>>n;
    int stalls[n];
    for (int i=0;i<n;i++){
        cin>> stalls[i];
        maxi=max(maxi,stalls[i]);
    }

    cin>>k;
    int e=maxi;
    int ans=-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if (isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}