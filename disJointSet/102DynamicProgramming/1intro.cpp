#include<iostream>
#include<vector> 
using namespace std;
int solve(vector<int> nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    if (nums.size()==1){
        return nums[0];
    }
    if (nums.size()<=2){
        return max(nums[0], nums[1]);
    }
    dp[0]=nums[0];
    // dp[1]=nums[1];
    for (int i=1; i<n; i++){
        int incl=dp[i-2]+nums[i];
        int excl=dp[i-1];
        cout<< incl<<"  "<< excl << endl;
        dp[i]=max(incl, excl);
    }
    return dp[n-1];
}
int main(){
    int n;
    cin>> n;
    cout<< "Enter the elements"<< endl;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int k;
        cin>> k;
        nums.push_back(k);
    }
    int ans= solve(nums);
    cout<< ans<< endl;
    
}