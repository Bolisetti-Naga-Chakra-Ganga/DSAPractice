// TIME COMPLEXITY: 

#include<bits/stdc++.h>
using namespace std;
int n=1000000;
bool sieve[1000001]={0};
void createSieve(){
    for (int i=2; i<=n;i++){
        sieve[i]=true;
    }
    for(int i=2; i*i<n; i++){
        if(sieve[i]){
            for (int j=i*i; j<n; j=j+i){
                sieve[i]=false;
            }
        }
    }
}
vector<int> generatePrimes(int n){
    vector<int>ds;
    for (int i=2; i<=n; i++){
        if(sieve[i]){
            ds.push_back(i);
        }
    }
}
int main(){
    createSieve();
    int t;
    cin>>t;
    int l,r;
    cin>> l >>r ;
    // step1: Generate all primes till sqrt(r)
    vector<int> primes =generatePrimes(sqrt(r));

    //step2: create a dummy array of size r-l+1 and mark every element as 1
    int dummy[r-l+1]={1};
    //step3: for all prime nums marks its multiples as false
    for (auto pr:primes){
        int firstMultiple=(l/pr)*pr;
        if (firstMultiple<l){
            firstMultiple+=pr;
        }
        for (int j= max(firstMultiple,pr*pr); j<=r; j+=pr){
            dummy[j-l] =0;
        }
    }
    // step 4 get all prime nums
    for (int i=l;i<=r; i++){
        if (dummy[i-l]==1){
            cout<< i << " ";
        }
    }
}