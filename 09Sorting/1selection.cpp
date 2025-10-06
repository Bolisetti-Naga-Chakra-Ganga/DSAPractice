// space complexity=O(n), time complexity=O(n^2)
//best case and worst case complexity is same
#include<iostream>
using namespace std;
int main(){
    int arr[10]={45,23,76,2,56,23,9,12,34,89};
    for (int i=0; i<10-1; i++){
        int minIndex=i;
        for (int j=i+1; j<10; j++){
            if (arr[j]<arr[minIndex]){
                minIndex =j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    cout<<arr<<endl;

    for (int k=0; k<10; k++){
        cout<<arr[k]<<endl;
    }
}

// home work: 1.flow chart, 2.stable or unstable
