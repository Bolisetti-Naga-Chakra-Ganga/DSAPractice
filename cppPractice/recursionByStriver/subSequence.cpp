#include<iostream>
#include<vector>
using namespace std;
void subsequence(vector<int> arr,vector<int> temp, int index, vector<vector<int>> &ans){
    if (index== arr.size()){
        ans.push_back(temp);
        // cout<< "called" << endl;
        return;
    }
    subsequence(arr, temp, index+1, ans);
    temp.push_back(arr[index]);
    subsequence(arr, temp, index+1, ans);
    temp.pop_back();
}
// void subsequenceSum(vector<int> arr,vector<int> temp, int index, vector<vector<int>> &ans,int tempSum, int sum){
//     if (index== arr.size() && tempSum==sum){
//         ans.push_back(temp);
//         // cout<< "called" << endl;
//         return;
//     }
//     subsequence(arr, temp, index+1, ans, tempSum, sum);
//     temp.push_back(arr[index]);
//     tempSum= tempSum+arr[index];
//     subsequence(arr, temp, index+1, ans, tempSum , sum);
//     temp.pop_back();
// }
int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    vector<vector<int>> ans;
    vector<int> temp;
    subsequence(arr, temp, 0, ans);
    for (auto i: ans ){
        cout<<"[ ";
        for(auto j:i){
            cout<< j << " ";
        }
        cout<< "]"<< endl;
    }
}