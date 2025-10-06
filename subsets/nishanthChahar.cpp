#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& nums, int index ){
    // cout<< "index= "<< index << endl;
    if(index>=nums.size()){
        for (int i:nums){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }
    for(int i=index; i<nums.size(); i++){
        // cout<<" i =" << i << endl;
        swap(nums[i], nums[index]);
        solve(nums, index+1);
        swap(nums[i], nums[index]);
    }
    }
void permute(vector<int>& nums) {
    int index=0;
    solve(nums, index);
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    permute(nums);

}