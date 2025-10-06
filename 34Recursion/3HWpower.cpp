/*i/p = 2, 3 =======> o/p = 8 */
#include<iostream>
using namespace std;
int power(int a, int b){
    if (b==0){
        return 1;
    }
    if (b==1){
        return a;
    }
    // edge condition for me: base condition 2, call the fun once and store it in ans and use it for multiple times
    if ((b&1)==0){
        int ans=(power(a, b/2));
        return (ans*ans);
        // return ((power(a, b/2))*(power(a, b/2)));
    }
    else{
        int ans=(power(a, b/2));
        return (a*ans*ans);
        // return (a*(power(a, b/2))*(power(a, b/2)));
    }
}
int main(){
    cout<< power(3, 11)<< endl ;
}
