#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int x, int y, int n, int visited[][4], int m[][4]){
    if ((x>=0 && x<n) && (y>=0 && y<n) && m[x][y] == 1 ){
        return true;
    }
    return false;
}
void solve(int m[][4], int n, vector<string>& ans, int x, int y, int visited[][4], string path){
    cout<< " called "<< endl;
    if (x==n-1 && y==n-1){
        ans.push_back(path);
    }
    visited[x][y]=1;
    // 4 choices
    int newx=x+1;
    int newy=y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('D');
        solve(m,n,ans, newx,newy, visited, path);
        path.pop_back();
    }
    newx=x;
    newy=y-1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('L');
        solve(m,n,ans, newx,newy, visited, path);
        path.pop_back();
    }
    newx=x;
    newy=y+1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('R');
        solve(m,n,ans, newx,newy, visited, path);
        path.pop_back();
    }
    newx=x-1;
    newy=y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('U');
        solve(m,n,ans, newx,newy, visited, path);
        path.pop_back();
    }
    visited[x][y]=0;
}
int main(){
    int maze[4][4]={1,0,0,0,1,0,0,0,1,1,0,0,0,1,1,1};
    int visited[4][4]={0};
    int n=4;
    vector<string> ans;
    int srcx=0;
    int srcy=0;
    string path="";
    solve(maze, n, ans, srcx, srcy, visited, path);
    for (string i:ans){
        cout<<i<<" ";
    }cout<<endl;
}