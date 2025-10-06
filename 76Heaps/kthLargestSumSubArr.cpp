#include<iostream>
#include<queue>
using namespace std;
int kthLargestSumSub(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i;j<n; j++){           
            sum+=arr[j];
            if (minHeap.size() < k){
                minHeap.push(sum);
            }
            else{
                if (minHeap.top()< sum){
                    minHeap.pop();
                    minHeap.push(sum);
                }
            }
        }
    }
    return minHeap.top();
}
int main(){
    int arr[]= {4, 5, 2, 7, 8, 6};
    int arr2[]= {1,2,3};
    cout << kthLargestSumSub(arr, 6, 3) << endl;
    // cout << kthLargestSumSub(arr2, 3, 2) << endl;
}