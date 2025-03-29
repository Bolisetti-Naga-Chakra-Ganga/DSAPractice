#include<iostream>
using namespace std;
void printRowSum(int arr[][4], int row, int col){
    for (int row=0; row<3; row++){
        int sum=0;
        for (int col=0; col<4; col++){
            sum+=arr[row][col];
        }
        cout<<sum<<endl;
    }
}
void printColSum(int arr[][4], int row, int col){
    for (int col=0; col<4; col++){
        int sum=0;
        for (int row=0; row<3; row++){
            sum+=arr[row][col];
        }
        cout<<sum<<endl;
    }
}
int largestRowSum(int arr[][4], int row,int col){
    int ansSum=0;
    int ansRow=0;
    for (int row=0; row<3; row++){
        int sum=0;
        for (int col=0; col<4; col++){
            sum+=arr[row][col];
        }
        if (sum> ansSum){
            ansSum=sum;
            ansRow=row;
        }
    }
    return ansRow;
}
int main(){
    int arr[3][4];
    for (int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    // printRowSum(arr,3,4);
    // printColSum(arr, 3, 4); 
    cout<<largestRowSum(arr, 3, 4); 
}