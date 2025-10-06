#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<pair<int, int>> adj[],int source, int &ans,int cost, int k, int count, int dest){
    cout<< source << " "<< dest<< " " << count<<endl;
    if (source == dest && count<=k+1){
        // cout<< "Called"<< endl;
        ans= min(ans, cost);
        return;
    }
    else if(count >=k+1){
        return;
    }
    // cout<<"Called"<< endl;
    for (auto it: adj[source]){
        int node= it.first;
        int newCost=it.second+cost;
        // count++;
        dfs(adj, node, ans, newCost, k, count+1, dest);
        // count--;
    }

}

int main(){

    int src=0;
    int dst=2;
    vector<pair<int, int>> adj[]={{{1,5},{3,2}},{{2,5},{4,1}},{},{{1,2}},{{2,1}}};
    // vector<pair<int, int>> adj[]={{{1,100}},{{2,100},{3,600}},{{0,100},{3,200}},{}};
    int ans=1e9;
    int cost=0;
    dfs(adj,src, ans, cost, 2, 0, dst);
    cout<<ans;
}