#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> image= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    vector<vector<int>> ans=image;
    for (auto i:ans){
        for(auto j:i){
            cout<< j<< " ";
        }
        cout<< endl;
    }


}

