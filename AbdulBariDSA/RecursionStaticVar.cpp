#include<iostream>
using namespace std;
// int x=0; // global declaration 
int statVar(int n){
    static int x=0;
    if(n>0){
        x++;   // 1 2 3 4 5
        // int ans= statVar(n-1)+n;
        int ans=statVar(n-1) + x ;
        cout<< x <<"   "<< ans << endl ; //
        return ans;
    }
    return 0;
}
int main(){
    int a=5;
    int ans=statVar(a);
    cout<< ans<< endl;
    cout<< endl << endl << endl;
    int bns=statVar(a);
    cout<< bns<< endl;
}
