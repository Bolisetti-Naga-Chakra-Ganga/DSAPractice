#include<iostream>
using namespace std;


// must include no of column
bool isPresent(int arr[][4],int target, int row, int col){ 
    for (int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if (arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}



int main(){
    // int arr1[3][4]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr2[3][4]={{1,11,111,1111}, {2,22, 222, 2222}, {3, 33, 333, 3333}};
    int arr[3][4];
    //taking input --> row wise
    for (int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    // // taking input --> column wise 
    // for (int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin >> arr[row][col];
    //     }
    // }
    // printing output
    // for (int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         // cout<<arr1[i][j] << " ";
    //         // cout<<arr2[i][j] << " ";
    //         cout<<arr[i][j] << " ";
    //     }
    //     cout<<endl;
    // }
    int target;
    cout<<"enter the element to be searched";
    cin>>target;
    if (isPresent(arr, target, 3, 4)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}