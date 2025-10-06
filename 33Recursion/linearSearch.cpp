#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
    if (size==0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else{
        cout<< " called ";
        bool remainingPart=linearSearch(arr+1, size-1, key);
        return remainingPart;  
    }
}
int main(){
    int arr[5]={2, 6, 7, 8, 11};
    int size=5;
    // int key;
    // cin>> key;
    bool ans= linearSearch(arr,size, 7);
    cout<<  ans << endl;
}