#include<iostream>
using namespace std;
int main(){
    int arr[8]= { 2, 5, 0, 7, 0, 8, 9, 0};
    int i=0;
    for (int j=0; j<8 ; j++){
        if (arr[j] !=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    for (int p=0; p<8; p++){
        cout<<arr[p]<< "  ";
    }
}