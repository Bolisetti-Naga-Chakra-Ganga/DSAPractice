#include<iostream>
using namespace std;
int getmax(int num[], int n){
    int maxi= INT32_MIN;
    for (int i=0; i<n; i++){
        maxi=max(maxi,num[i]);
        // if (num[i]>max){
        //     max=num[i];
        // }
    }
    return maxi;

}
int main(){
    int s;
    cin>> s;
    int num[100];
    for (int i=0; i<s; i++){
        cin>> num[i];
    }
    cout<< getmax(num,s);
}