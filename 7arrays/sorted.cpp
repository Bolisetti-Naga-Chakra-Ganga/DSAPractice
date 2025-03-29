#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr1[7]={1,3, 4, 6,7,9, 10}; 
    int arr2[6]={3, 5, 6, 7, 8,9};
    int i=0, j=0;
    vector<int>ans;
    while((i<7) && (j< 6)){
        if (arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i]< arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for (int i:ans){
        cout<<i<<" ";
    }cout<<endl;
}