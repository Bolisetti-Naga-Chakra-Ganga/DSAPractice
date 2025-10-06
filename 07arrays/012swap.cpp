#include<iostream>
using namespace std;
// Approaches
/*
soln1 : sort using any sorting algo
soln2 : traverse and count each elem frequecy and modify given arr accordingly
soln3 : int iterations, using 2 pointers [sort zero's to left and then in next iteration sort 1s to next to 0 or 2's to right side]
*/
void sort12(int arr[], int start, int end){
    int left=start, right=end-1;
    while(left<right){
        while(arr[left]==1 && (left< right)){
            left++;
        }
        while(arr[right]==2 && (right> left)){
            right--;
        }
        if (arr[left]==2 && arr[right] ==1){
            swap(arr[left], arr[right]);
            left++, right--;
        }
    }
}
void sort012(int arr[], int n){
    int left=0, right=n-1, index=0;
    while(left<right){
        while(arr[left]==0 && (left< right)){
            left++;
        }
        while(arr[right]!=0 && (right> left)){
            right--;
            // cout<< " Called"<< endl;
        }
        if (arr[left]!=0 && arr[right] ==0){
            swap(arr[left], arr[right]);
            left++, right--;
        }
    }
    for (int i=0; arr[i]==0; i++){
        index=i;
    }
    cout<< index<< endl;
    for (int j=0; j<n; j++){
        cout<< arr[j]<< " ";
    }
    cout<< endl;
    sort12(arr, index+1, n);

}
int main(){
    int arr[10]={2, 0, 1, 0, 2, 2, 0, 1, 0, 1};
    sort012(arr, 10);
    for (int i=0; i<10; i++){
        cout<< arr[i]<< " ";
    }
}