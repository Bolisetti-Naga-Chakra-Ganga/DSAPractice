#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// tc =O(n)
vector<int> nextSmallestElement(int arr[], int n){
    vector<int>next(n);
    stack<int> s;
    s.push(-1);
    for (int i=n-1; i>=0; i--){
        int k=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=k){
            s.pop();
        }
        if (s.top() == -1){
            next[i]=n;
        }
        else{
            next[i]=s.top();
        }
        s.push(i);
    }
    return next;
}

// TC O(n)
vector<int> prevSmallestElement(int arr[], int n){
    vector<int>prev(n);
    stack<int> s;
    s.push(-1);
    for (int i=0; i<n; i++){
        int k=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=k){
            s.pop();
        }
        prev[i]=s.top();
        s.push(i);
    }
    return prev;
}
// O(n)
void print(vector<int> vect){
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
}
// O(n)
int largestRectnguleArea(int heights[], int n){
    vector<int> next(n);
    next =nextSmallestElement(heights, n);

    vector<int> prev(n);
    prev= prevSmallestElement(heights, n);
    // print(prev);
    // print(next);

    int area=-1;
    for (int i=0; i<n; i++){
        int l= heights[i];
        int b= next[i]-prev[i]-1;
        int newArea=l*b;
        area=max(area, newArea);
        // cout<< area << endl;
    }
    return area;

}
int main(){
    int heights[6]={2, 1, 5, 6, 2, 3};
    int n= 6;
    int ans=largestRectnguleArea(heights, n);
    cout<< ans<< endl;
}