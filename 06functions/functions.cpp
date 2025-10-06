#include<iostream>
using namespace std;
/*
int power(int a, int b){
    int k=1;
    for (int i=1; i<=b; i++){
        k=k*a;
    }
    return k;
}
int main(){
    int a,b;
    cin>> a >>b;
    int ans=power(a,b);
    cout<< ans;
    return 0;
}
*/

//  to find even and odd
bool iseven(int a){
    if (a&1){  // for even a&1=0; and for odd a&1==1
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>> num;
    if (iseven(num)){
        cout<<" even";
    }
    else{
        cout<<"not even";
    }
    
}

int main(){
    int a;
    cin>> a;
    // int b=a&1;
    // cout<< b;
    // if (b==0){
    //     cout<< "even";
    // }
    // else{
    //     cout<<"odd";
    // }


}