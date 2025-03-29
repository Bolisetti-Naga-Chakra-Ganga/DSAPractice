#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    // basic array 
    int basic[3]={1, 2, 3};
    // array initialization using STL 
    array<int, 4> a={1, 2, 3, 4};
    int size=a.size();
    // traversing the array
   /*
   
    for (int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd index -->"<< a.at(2)<<endl;
    cout<< " empty or not -->"<< a.empty()<<endl;  // returns 0(false) if not ampty,returns 1(true) if empty
    cout<<"first element -->"<<a.front()<<endl;  // time complexity O(1)
    cout<<"last element -->"<<a.back()<<endl; // time complexity O(1)

    */
   vector<int>v; 
   //size of the vector will be doubled when extra elements need to be added. for ex if we need to insert 5th element in a vector whose size is 4 then the another vector will be created with the size 8 and all the elements will be copied to new vector and old vector will be dumped.

   vector<int>b(5,1); // creating a vector
   
   cout<<"print"<<endl;
    for (int i:b){
        cout<<i<<" ";
    }cout<<endl;

    // copying the vector to another vector 
    vector<int> last(b);

    for (int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

   cout<<"capacity -->"<<v.capacity()<<endl;
   v.push_back(1);
   cout<<"capacity -->"<<v.capacity()<<endl;
   v.push_back(2);
   cout<<"capacity -->"<<v.capacity()<<endl;
   v.push_back(3);
   cout<<"capacity -->"<<v.capacity()<<endl;
   cout<<"size -->"<<v.size()<<endl;

   cout<<"element at 2nd index"<<v.at(2)<<endl;
    cout<<"first element -->"<<v.front()<<endl;
    cout<<"last element -->"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"after pop"<<endl;

    v.pop_back();
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"before clear"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;
    
}
