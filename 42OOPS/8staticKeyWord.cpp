#include<iostream>
#include<string.h>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    // shallow copy
    char *name;
    static int remainingTime;

    Hero(){
        // cout<< "constructor called"<< endl;  
    }
    static int random(){
        // cout<< this->health<<endl;  // error
        // cout<< helath<< endl; // we can access only static var, hence it will through an error
        // cout<< level<< endl;  // we can access only static var, hence it will through an error
        return remainingTime;
    }
};
// syntax to access
// datatype classname :: feildname = value;
int Hero::remainingTime= 40;

int main(){
    // cout<< Hero::remainingTime<< endl;
    cout<<Hero::random()<<endl;
//     Hero ram;
//     cout<< ram.remainingTime<< endl;
//     Hero raj;
//     raj.remainingTime=10;
//     cout<< ram.remainingTime<< endl;
//     cout<< raj.remainingTime<< endl;

}