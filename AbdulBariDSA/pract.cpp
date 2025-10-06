#include<iostream>
using namespace std;
// int fact(int a){
//     if (a==0){
//         return 1;
//     }
//     return fact(a-1)*a;
// }

int power(int a, int b){
    if (b==0){
        return 1;
    }
    return a*power(a, b-1);
}
int main(){
    // cout<<fact(4)<< endl;
    cout<< power(4, 5);
}