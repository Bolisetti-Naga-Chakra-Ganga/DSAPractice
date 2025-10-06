// space complexity: O(n)
// time complexity: O(nlogn)

#include<iostream>
using namespace std;
void sort(int arr[], int s, int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    cout<< "sort for "<< s << " "<< e << endl;
    
    // copie values
    int mainarrayIndex=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[mainarrayIndex++];
    }

    for (int i=0; i<len2; i++){
        second[i]=arr[mainarrayIndex++];
    }
    int index1=0;
    int index2=0;
    mainarrayIndex=s;
    while(index1 < len1 && index2 < len2){
        if (first[index1]<second[index2]){
            arr[mainarrayIndex++]=first[index1++];
        }
        else{
            arr[mainarrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayIndex++]=second[index2++];
    }

}
void mergeSort(int arr[], int s, int e){
    // base case
    cout<< "merge sort for "<< s << " "<< e << endl;

    if(s>=e){
        return;
    }
    int mid= (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    sort(arr, s, e);
}
int main(){
    int arr[8]={4,23, 56, 32, 45, 89, 43, 22};
    mergeSort(arr, 0, 7);
    for (int i=0;i<8; i++){
        cout<< arr[i] << endl;
    }
}