/* 
here we need to return the sum of the min and max elements of sub array of size k
Ex:
Input : arr[] = {2, 5, -1, 7, -3, -1, -2}  
K = 4
Output : 18
Explanation : Subarrays of size 4 are : 
    {2, 5, -1, 7},   min + max = -1 + 7 = 6
    {5, -1, 7, -3},  min + max = -3 + 7 = 4      
    {-1, 7, -3, -1}, min + max = -3 + 7 = 4
    {7, -3, -1, -2}, min + max = -3 + 7 = 4   
*/

#include<iostream>
#include<deque>
using namespace std;
int solve(int* arr, int n, int k){
    deque<int> maxi(k);
    deque<int> mini(k);
    for (int i=0; i<k; i++){
        while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans= arr[maxi.front()]+ arr[mini.front()];   
    for(int i=k; i<n; i++){
        while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.back()>=k){
            mini.pop_front();
        }
        while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
        ans+= arr[maxi.front()]+ arr[mini.front()];
        // cout<< ans<<endl;
    }
    // cout<<ans;
    return ans;
}
int main(){
    int arr[7]={2, 5, -1, 7, -3, -1, -2};
    int k;
    cin>>k;
    // solve(arr, 7, 4);
    cout<< solve(arr, 7, k)<<endl;
}