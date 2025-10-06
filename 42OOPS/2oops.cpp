#include<iostream>
using namespace std;
class Hero{
    // properties
    public:
    // without this public declaration we cant access the proporties out side of this class
    int health;
    // private:
    char level;
    void print(){
        cout<< level << endl;
    }
};
int main(){
    Hero ram;
    ram.health=70;
    ram.level='a';
    cout<< " health is: "<< ram.health<< endl;
    cout<< " level is: "<< ram.level<< endl;
    
}