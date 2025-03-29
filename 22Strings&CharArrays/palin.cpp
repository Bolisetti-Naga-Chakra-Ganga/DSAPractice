#include<iostream>
using namespace std;
bool ispalen(char arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        if(!((arr[s]>='a' && arr[s]<='z') || (arr[s]>='A' && arr[s]<='Z') ||(arr[s]>='0' && arr[s]<='9'))){
            s++;
            continue;
        }
        else if(!((arr[e]>='a' && arr[e]<='z') || (arr[e]>='A' && arr[e]<='Z') ||(arr[e]>='0' && arr[e]<='9'))){
            e--;
            continue;
        }
        else if(!((arr[s]== arr[e]) || (arr[s]+32==arr[e]) || (arr[s]-32 == arr[e]))){
            return false;
        }
        e--;
        s++;
    }
    return true;
}
int main(){
    char name[20];
    cin>>name;
    int n;
    cin>>n;
    cout<<ispalen(name, n);
    
}