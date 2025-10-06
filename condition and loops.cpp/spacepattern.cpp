#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int i=1;
    // while(i<=n){
    //     int s=n-i;
    //     while(s){
    //         cout<<" ";
    //         s=s-1;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int i=n;
    // while(i){
    //     int j=i;
    //     while(j){
    //         cout<<"*";
    //         j=j-1;
    //     }
    //     i=i-1;
    //     cout<<endl;
    // }

    // int i=n;
    // while(i){
    //     int s=n-i;
    //     while(s){
    //         cout<<" ";
    //         s=s-1;
    //     }
    //     int j=i;
    //     while(j){
    //         cout<<"*";
    //         j=j-1;
    //     }
    //     cout<<endl;
    //     i=i-1;
    // }

    // int i=1;
    // while(i<=n){
    //     int s=1;
    //     while(s<n-i){
    //         cout<<" ";
    //         s=s+1;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j=j+1;
    //     }
    //     int k=1;
    //     while(k<i){
    //         cout<<k;
    //         k=k+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int s=i*2-2;
        while(s){
            cout<<"*";
            s=s-1;
        }
        int k=n-i+1;
        while(k){
            cout<<k;
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }

}