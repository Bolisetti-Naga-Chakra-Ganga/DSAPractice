#include<iostream>
using namespace std;
int treeRecur(int n){
    if (n>0){
        cout<< n << " ";
        treeRecur(n-1);
        treeRecur(n-1);
    }
    return 0;
}
int main(){
    treeRecur(3);
}