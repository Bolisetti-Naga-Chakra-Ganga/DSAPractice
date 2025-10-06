#include<iostream>
using namespace std;
bool isSorted(int* arr,int size){
    if (size==0 || size==1){
        return true;
    }
    // if (arr[size-1]<arr[size-2]){
    //     return false;
    // }
    // else{
    //     return(isSorted(arr, size-1));
    // }
    if (arr[0]> arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1, size-1);
        return remainingPart;
    }

}
int main(){
    int arr[5]={2, 6, 7, 8, 11};
    int size=5;
    bool ans= isSorted(arr, size);
    cout<< ans << endl;
}