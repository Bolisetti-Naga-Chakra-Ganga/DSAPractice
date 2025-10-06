#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char, int> m1;
    cout<<"Enter the sentence"<< endl;
    string sentence;
    getline(cin,sentence);
    int n= sentence.length();
    char maxLett=sentence[0];
    char minLett=sentence[0];
    int maxCount=1;
    int minCount=n;
    cout<< sentence.length()<<endl;
    for(int i=0; i<sentence.length(); i++){
        char ch= sentence[i];
        if (!m1[ch]){
            m1[ch]=1;
            minLett= ch;
            minCount=1;
        }
        else{
            m1[ch]++;         
        }
    }
    for (int i=0; i<n; i++){
        char ch= sentence[i];

    }
    // m1['d']=2;
    // m1['f']=13;
    // m1['b']=13;
    // m1['a']=13;
    // for (auto: char i in m1)
}