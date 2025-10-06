#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={4, 3, 2, 6};
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for(int i: arr){
        minHeap.push(i);
    }
    int cost=0;
    while(minHeap.size()>1){
        int a= minHeap.top();
        minHeap.pop();
        int b= minHeap.top();
        minHeap.pop();
        int sum=a+b;
        cost+=sum;
        minHeap.push(sum);
    }
    // cout<< "Tot length of the rope is : "<< minHeap.top()<< endl;
    cout<< "Min Cost is : " << cost<< endl;
}