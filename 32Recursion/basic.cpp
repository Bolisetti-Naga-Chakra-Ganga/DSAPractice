#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    cout<< " source " <<src << " dest "<< dest << endl;
    if (src== dest){
        cout<<endl<< " reached"<< endl << endl;
        return;
    }
    // src++;
    // reachHome(src , dest);
    reachHome(src+1 , dest);
}
int main(){
    int dest=10;
    int src=1;
    reachHome(src, dest);
}