#include<iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key){
    
    if (start>end){
        return false;
    }
    int mid= (start+end)/2;
    if (arr[mid]== key){
        return true;
    }
    else if(arr[mid]>key){
        // bool remainingPart=binarySearch(arr, mid-1, key);
        return (binarySearch(arr, start, mid-1, key));
    }
    else {
        // bool remainingPart= binarySearch(arr[mid+1], size, key);
        return (binarySearch(arr, mid+1, end , key));
    }

}
int main(){
    int arr[6]={2, 6, 7, 8, 11, 18};
    int size=6;
    int key=12;
    bool ans=binarySearch(arr, 0, size, key);
    cout<< ans<< endl;
}