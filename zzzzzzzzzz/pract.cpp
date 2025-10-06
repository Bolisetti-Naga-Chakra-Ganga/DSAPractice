#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> recursiveCall(int n, vector<int> v, int count){
    cout<< "called"<< endl;
    if (count>=30){
        return v;
    }
    v.push_back(n);
    count+=n;
    recursiveCall(n+1, v, count);
    cout<<"for "<< n<< endl;
    for (auto i:v){
        cout<< i<< " ";
    }
    cout<< endl;
    // recursiveCall(n+1, v, count);
    return v;
}
int main(){
    /**
    vector<int> v;
    int n=4;
    // cin>>n;
    int count=0;
    vector<int> p= recursiveCall(n, v, count);
    // for (auto i:p){
    //     cout<< i<< endl;
    // }
    **/
   set<int> st;
   st.insert(12);
   st.insert(65);
   st.insert(27);
   st.insert(12);
   st.insert(9);
   st.insert(65);

   st.erase(12);
   for (auto it:st){
    cout<< it<< " ";
   }

}