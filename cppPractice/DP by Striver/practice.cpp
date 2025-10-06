#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> h, int n, int k){
    if(n==0){
        return 0;
    }
    int ans=64676;
    for(int i=1; i<=k; i++){
        int temp=n-i;
        if (temp<0){
            continue;
        }
        int diff=abs(h[n]-h[temp])+solve(h, temp, k);
        ans= min(ans, diff);
    }
    cout<< ans<< endl;
    return ans;
}

int main(){
    int n;
    int k;
    int a=379845709;
    cout<< a<< endl;
    cin>> n;
    cin>> k;
    
    vector<int> h;
    for(int i=0; i<n; i++){
        int p;
        cin>> p;
        h.push_back(p);
    }
    int ans= solve(h, n, k);
    cout<< ans;
    // 5 3
    // 10 30 40 50 20
}