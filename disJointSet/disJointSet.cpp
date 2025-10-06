#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class DisJointSet{
    vector<int> rank, parent, size;

    public:
    DisJointSet(int n){
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        parent.resize(n+1);
        for (int i=0; i<=n; i++){
            parent[i]=i;
        }
    }

    int findUlPar(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node]= findUlPar(parent[node]);

    }

    void unionByRank(int u, int v){
        int ulp_u= findUlPar(u);
        int ulp_v= findUlPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u]= ulp_v;
            // size[ulp_v]=size[ulp_u]+size[ulp_v];
        }
        else if (rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] =ulp_u;
            // size[ulp_u]=size[ulp_u]+size[ulp_v];

            
        }
        else{
            parent[ulp_u]=ulp_v;
            rank[ulp_v]++;
            // size[ulp_v]=size[ulp_u]+size[ulp_v];
        }
        // setSize[ulp_v]=setSize[ulp_u]+setSize[ulp_v];
    }

    void unionBySize(int u, int v){
        int ulp_u= findUlPar(u);
        int ulp_v= findUlPar(v);
        if (ulp_u == ulp_v){
            return ;
        }
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]= ulp_v;
            size[ulp_v]= size[ulp_u]+size[ulp_v];
        }
        else if(size[ulp_u]>=size[ulp_v]){
            parent[ulp_v]= ulp_u;
            size[ulp_u]=size[ulp_u]+size[ulp_v];
        }
    }
};


int main(){
    DisJointSet ds(7);

    /* 
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    ds.unionByRank(3, 7);
    */

    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);
    ds.unionBySize(3, 7);
   

    if(ds.findUlPar(3) == ds.findUlPar(7)){
        cout<< "same"<< endl;
    }
    else{
        cout<< "Not same"<< endl;
    }
}