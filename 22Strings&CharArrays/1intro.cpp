#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
        // s++;
        // e--;
    }
}

int getLength(char name[]){
    int count=0;
    for (int i=0; name[i]!='\0'; i++){
        count+=1;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    // name[2]='\0';
    //compiler stops printing after encountering a null character/ tab/ enter
    cout<<name<<endl;
    int len=getLength(name);
    // cout<< " length is "<<getLength(name)<<endl;
    reverse(name,len);
    cout<<"reversed string is  "<< name<<endl;
}