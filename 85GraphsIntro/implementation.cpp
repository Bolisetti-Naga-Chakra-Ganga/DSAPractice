#include<iostream>
#include<unordered_map>
#include<map>
#include<list>
using namespace std;
template <typename T>
class graph{
    public:
    // unordered_map<int,list<int>>adjMap;
    map<T, list<T>>adjMap;
    void addEdge(T u, T v, bool direction){
        // direction =0 ->undirected graph
        // direction = 1->directed graph

        adjMap[u].push_back(v);
        if (direction ==0){
            adjMap[v].push_back(u);
        }
    }
    void printAdj(){
        for(auto i :adjMap){
            cout<< i.first << "->";
            for(auto j: i.second){
                cout<< j<<",";
            }
            cout<< endl;
        }
    }
};

int main(){
    int n;
    cout<< "enter the num of nodes"<< endl;
    cin>> n;
    int m;
    cout<< "Enter the num of edges"<< endl;
    cin>> m;

    graph<int> g;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>> v;
        g.addEdge(u,v,0);
    }
    g.printAdj();

}