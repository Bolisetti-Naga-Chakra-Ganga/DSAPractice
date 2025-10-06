#include<iostream>
using namespace std;
bool isPallindrom(string name, int start, int end){
    if (start>= end){
        return true;
    }
    if (name[start]!= name[end]){
        return false;
    }
    return (isPallindrom(name, start+1, end-1));
}
int main(){
    string name;
    // getline(cin, name);
    cin>> name;
    int n=name.length()-1;
    cout<< isPallindrom(name,0,n);
}