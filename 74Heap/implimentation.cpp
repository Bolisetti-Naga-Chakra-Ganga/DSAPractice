#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){ // TC= O(log n)
        size=size+1;
        int index= size;
        arr[index]=val;
        
        while (index>1){
            int parent= index/2;
            if (arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
    int deletion(){
        if(size ==0){
            cout<< "nothing to delete"<< endl;
            return -1;
        }
        int ans= arr[1];
        arr[1]= arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftInd= i*2;
            int rightInd= i*2+1;
            if (leftInd<size && arr[leftInd]> arr[i] && (rightInd>=size || arr[rightInd]< arr[leftInd])){
                swap(arr[i], arr[leftInd]);
                i= leftInd;
            }
            else if(rightInd<size && arr[rightInd]> arr[i]){
                swap(arr[i], arr[rightInd]);
                i=rightInd;
            }
            else{
                return ans;
            }

        }
        return ans;
    }
};
int main(){
    // Heap h;
    // h.insert(55);
    // h.insert(53);
    // h.insert(54);
    // h.insert(52);
    // h.insert(51);
    // h.print();
    // cout<<h.deletion()<<endl;
    // cout<<h.deletion()<<endl;

    Heap h2;
    h2.insert(98);
    h2.insert(85);
    h2.insert(89);
    h2.insert(74);
    h2.insert(63);
    h2.insert(62);
    h2.insert(75);
    h2.print();

    h2.deletion();
    h2.print();
}