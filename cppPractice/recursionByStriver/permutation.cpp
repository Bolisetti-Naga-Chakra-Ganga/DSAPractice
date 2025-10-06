#include<iostream>
#include<vector>
#include<map>
using namespace std;
// TC O(n!*n) SC=O(n)+O(n) (if we ignore ans vector)
void permutations(vector<int> arr, vector<int> temp,vector<vector<int>> &ans, map<int, bool> mapping){
    if(temp.size()== arr.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(mapping[i]){
            continue;
        }
        temp.push_back(arr[i]);
        mapping[i]=true;
        permutations(arr,temp,ans,mapping);
        mapping[i]=false;
        temp.pop_back();
    }
}
void optimisedPermut(vector<int> arr, vector<vector<int>> &ans, int index){
    // cout<<"called"<< endl;
    if(index==arr.size()-1){
        ans.push_back(arr);
    }
    for(int i=index; i<arr.size(); i++){
        swap(arr[index], arr[i]);
        optimisedPermut(arr, ans, index+1);
        swap(arr[i], arr[index]);
    }


}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<int> temp;
    vector<vector<int>> ans;
    map<int, bool> mapping;
    // permutations(arr,temp, ans, mapping);
    optimisedPermut(arr, ans, 0);
    for(auto i:ans){
        cout<<"[";
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<"]"<<endl;
    }
}