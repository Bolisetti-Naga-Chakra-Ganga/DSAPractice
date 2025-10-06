#include<iostream>
#include<vector>
using namespace std;
bool isPossible(int x, int y,int n, vector<vector<int>> arr, vector<vector<bool>>& visited){
    if ((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y]!=1) && (arr[x][y] ==1)){       
        return true;
    }else{
        return false;
    }
}
void ratInMaz(int x, int y,vector<vector<int>> arr, int n,vector<string>& ans, string path, vector<vector<bool>>& visited){
    if (x==n-1 && y==n-1){
        ans.push_back(path);
        cout<< path<< endl;
        return ;
    }
    //DOWN
    if (isPossible(x+1, y, n, arr, visited)){
        visited[x][y]=1;
        path+='D';
        ratInMaz(x+1, y, arr, n, ans, path, visited);
        path.pop_back();
    }

    //LEFT
    if (isPossible(x, y-1, n, arr, visited)){
        visited[x][y]=1;
        path+='L';
        ratInMaz(x, y-1, arr, n, ans, path, visited);
        path.pop_back();

    }

    //RIGHT
    if (isPossible(x, y+1, n, arr, visited)){
        visited[x][y]=1;
        path+='R';
        ratInMaz(x, y+1, arr, n, ans, path, visited);
        path.pop_back();
    }

    // UP
    if (isPossible(x-1, y, n, arr, visited)){
        visited[x][y]=1;
        path+='U';
        ratInMaz(x-1, y, arr, n, ans, path, visited);
        path.pop_back();
    }
    visited[x][y]=0;
    
}
int main(){
    vector<vector<int>> arr={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    int n=4;
    vector<vector<bool>> visited(n, vector<bool>(n,0));
    vector<string> ans;
    string path="";

    ratInMaz(0, 0,arr, n, ans,path, visited);

    // for (string s: ans){
    //     cout<< s<< endl;
    // }
    
}