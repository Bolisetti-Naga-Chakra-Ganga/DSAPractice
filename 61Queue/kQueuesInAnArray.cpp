#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int* front;
    int* rear;
    int* next;
    int freeSpot, size, k;

    Queue(int size, int k){
        this->size= size;
        arr= new int[size];
        next= new int[size];
        front = new int [k];
        rear= new int[k];
        freeSpot=0;
        for(int i=0; i<k; i++){
            front[i]=-1;
            rear[i]=-1;
        }
        for (int i=0; i<size; i++){
            next[i]=i+1;
        }
        next[size-1]=-1;

    }
    int push(int m, int val){
        if (freeSpot==-1){
            cout<<"Queue is overflow"<< endl;
            return -1;
        }
        int index=freeSpot;
        // cout<< index<< endl;
        freeSpot=next[index];
        if(front[m-1]==-1){
            front[m-1]=index;
        }
        else{
            next[rear[m-1]]=index;
        }
        next[index]=-1; // edge case
        rear[m-1]=index;
        arr[index]=val;
        return true;
    }
    // pop operation
    int pop(int m){
        if(front[m-1]==-1){
            cout<<"Queue underflow"<< endl;
            return -1;
        }
        int index=front[m-1];
        front[m-1]=next[index];
        next[index]=freeSpot;
        freeSpot=index;
        return arr[index];
    }

    int frontElem(int m){
        if (front[m-1]==-1){
            return -1;
        }
        else{
            int ind=front[m-1];
            return arr[ind];
        }
    }
};
int main(){
    Queue q(9,3);
    cout<<q.push(1,17)<<endl;
    cout<<q.push(2,14)<<endl;
    cout<<q.push(1,19)<<endl;
    cout<<q.push(2,67)<<endl;
    cout<<q.push(3,15)<<endl;
    cout<<q.push(1,56)<<endl;
    cout<<q.push(2,45)<<endl;
    cout<<q.pop(2)<< endl;
    cout<< q.frontElem(1)<<endl;
    cout<< q.frontElem(2)<<endl;
    cout<< q.frontElem(3)<<endl;

}