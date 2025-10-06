#include<iostream>
using namespace std;
int nestedRecur(int n){
    if (n>100){
        return n-10;
    }
    else{
        nestedRecur(nestedRecur(n+11));
        // nestedRecur(n-1);
    }
    
}
int main(){
    int ans= nestedRecur(95);
    cout<< ans<< endl;
}