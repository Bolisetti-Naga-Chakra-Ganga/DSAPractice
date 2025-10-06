#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value of n"<< endl;
    cin>> n;
    int count=0;
    int diff=n;
    for (int i=1; i<=n; i++){
        count=i;
        diff=n-1;
        for(int j=1; j<=i; j++){
            cout<< count<< " ";
            count=count+diff;
            diff--;
        }
        cout<<endl;

    }
}