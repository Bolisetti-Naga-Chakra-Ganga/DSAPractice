#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;


    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         cout<< "*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         cout<< i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         cout<< j;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=n;
    //     while (j>=1){
    //         cout<< j;
    //         j=j-1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // int p=1;
    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         cout<< p;
    //         j=j+1;
    //         p=p+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=1;
    //     while (j<=i){
    //         cout<< "*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=1;
    //     while (j<=i){
    //         cout<< i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // int p;
    // while(i<=n){
    //     int j=1;
    //     p=i;
    //     while (j<=i){
    //         cout<< p<<" ";
    //         j=j+1;
    //         p=p+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=1;
    //     while (j<=i){
    //         cout<< n-j+1 <<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    //  while(i<=n){
    //     int j=1;
    //     while (j<=i){
    //         cout<< i-j+1 <<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         char ch= 'A'+i-1;
    //         cout<< ch <<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         char ch= 'A'+j-1;
    //         cout<< ch <<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    // char ch= 'A';
    //  while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         char ch= 'A'+i+j-2;
    //         cout<< ch<<" ";
    //         j=j+1;   
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // while(i<=n){
    //     char ch= 'A'+i-1;
    //     int j=1;
    //     while (j<=i){
    //         cout<< ch <<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // while(i<=n){
    //     int j=1;
    //     while (j<=i){
    //         char ch='A'+i+j-2;
    //         cout<< ch <<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while (j<=i){
            cout<< ch <<" ";
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    }   
}