#include<iostream>
using namespace std;

int Last(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ansl=-1,ansr=-1;
    while(s<=e){
        if (arr[mid]==key){
            ansr=mid;
            s=mid+1;
        }
        else if (key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= (s+e)/2;
    }
    return ansr;
}

int firstAndLast(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ansl=-1,ansr=-1;
    while(s<=e){
        if (arr[mid]==key){
            ansl=mid;
            e-=1;
            
            /*
            // to find both with single function
            while(arr[mid]==key){
                ansl=mid;
                mid-=1;
            }
            return ansl;       
            while(arr[mid]==key){
                ansr=mid;
                mid+=1;
            }
            return ansl,ansr;
            */
        }
        else if (key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= (s+e)/2;
    }
    return ansl;
}
int main(){
    int arr[9]={1, 7, 7, 7, 7, 7, 7, 11, 17};
    int index1=firstAndLast(arr,9,7);
    int index2=Last(arr,9,7);
    cout<<"first index is "<<index1<<endl;
    cout<<"last index is "<<index2<<endl;
}