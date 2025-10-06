#include<iostream>
#include<queue>
using namespace std;
int kthSmallest(int arr[], int k, int n){
    priority_queue<int> pq;
    for (int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    for (int i=k; i<n; i++){
        if (arr[i]< pq.top()){
            pq.pop();             
            pq.push(arr[i]);
        }

    }
    return pq.top();
}
int main(){
    int arr[]={8,54,14,17,7,21,57,9, 67, 69};
    int k=4;
    int ans= kthSmallest(arr, 4, 10);
    cout<< ans<< endl;

}