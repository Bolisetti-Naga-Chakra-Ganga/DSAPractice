#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(11);

    cout<<"finding 6"<<binary_search(v.begin(), v.end(),1)<<endl;
    cout<<" lower bound -->"<< lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    cout<<" upper bound -->"<< upper_bound(v.begin(), v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"max -->"<< max(a,b);
    cout<<"min -->"<< min(a,b)<< endl;

    cout<< "before swaping    "<< a<<" "<< b<<endl;
    swap(a,b);
    cout<< "after swaping    "<< a<<" "<< b<<endl;

    string name="abcd";
    reverse(name.begin(),name.end());
    cout<< name<< endl;

    rotate(v.begin(),v.begin() +1,v.end());
    cout<< "after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}