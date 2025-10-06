#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;

    // max heap
    pq.push(12);
    pq.push(2);
    pq.push(14);
    pq.push(18);

    /*
    cout<< pq.top()<< endl;
    pq.pop();
    cout<< pq.top()<< endl;
    pq.pop();
    cout<< pq.top()<< endl;
    

    cout<< pq.size()<< endl;
    cout<< pq.empty()<< endl;
    */

    // min Heap
    priority_queue<int, vector<int>, greater<int> > minHeap;

    minHeap.push(12);
    minHeap.push(2);
    minHeap.push(14);
    minHeap.push(18);

    cout<< minHeap.top()<< endl;
    minHeap.pop();
    cout<< minHeap.top()<< endl;
    minHeap.pop();
    cout<< minHeap.top()<< endl;
    minHeap.pop();

    cout<< minHeap.empty()<< endl;
}