#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> max(int arr[], int k, int n){
    priority_queue<pair<int, int>> pq;
    for (int i=0; i<k; i++){
        pq.push({arr[i], i});
    }
    vector<int> ans;
    ans.push_back(pq.top().first);
    for (int j=k; j<n; j++){
        pq.push({arr[j], j});
        while(pq.top().second<j-k){
            pq.pop();
        }
        ans.push_back(pq.top().first);
    }
    return ans;
}
int main(){
    // int n=7;
    int n;
    cout<< "enter the no of elements"<< endl;
    cin>> n;
    int arr[n];
    // int arr[7]={1, 2, 3, 4, 2, 6, 7};
    cout<< "enter the elements"<< endl;
    for (int i=0; i< n; i++){
        int p;
        cin>>p;
        arr[i]=p;
    }
    int k;
    cout<< "enter the window size"<< endl;
    cin>>k;
    vector<int> ans=max(arr, k,n);
    for (auto it:ans){
        cout<< it<< " ";
    }
    
}