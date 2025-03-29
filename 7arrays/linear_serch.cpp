#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    int n;
    for (int i=0; i<n;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10]={1,6, 73,28,33,67,54,89,27,10};
    cout<<"enter the element to search for" << endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found){
        cout<<"key is present";
    }
    else{
        cout<<"key is present";
    }
}


// *******Note**** time complexity = O(n)