// difference of the diameter 

#include<iostream>
using namespace std;
int main(){
   int arr[4][4] = {1,4,7,3,9,2,7,9,3,6,4,8,6,6,8,2};
//    int arr[3][3]={1,2,3,4,5,6,9,8,9};
   int i=0,j=2;
   int ldia=0;
   int rdia=0;
   for (int i=0;i<3; i++){
    ldia+=arr[i][i];
    rdia+=arr[i][j];
    j--;
   }
   int ans=abs(ldia-rdia);
   cout<<ans;
}