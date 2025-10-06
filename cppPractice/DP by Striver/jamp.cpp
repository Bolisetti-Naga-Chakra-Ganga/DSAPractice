#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> heights, int n, int k){
    if(n==0){
        return 0; 
    }
    int ans=154546;
    for(int i=1; i<=k; i++){
        if(n-i< 0){
            continue;
        }
        int diff= solve(heights, n-1, k)+abs(heights[n]- heights[n-i]);
        ans= min(ans, diff);
    }
    return ans;

}
int maint(){
    int n, k;
    vector<int> heights;
    cin>> n;
    cin>> k;
    for(int i=0;i<n; i++){
        int p;
        cin>>p;
        heights.push_back(p);
    }
    int ans= solve(heights, n, k);
    cout<< ans;
}