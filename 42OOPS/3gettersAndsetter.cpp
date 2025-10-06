#include<iostream>
using namespace std;
class Hero{
    // properties
    private:
    int health;
    public:
    char level;
    // void print(){
    //     cout<< level << endl;
    // }

    // getters and setters
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health= h;
    }
    void setLevel(char ch){
        level=ch;
    }

};
int main(){
    Hero ram;
    // ram.health=70;// we can't access health directly 
    // to set the health we need to use the following operation
    ram.setHealth(60);
    cout<< "health is: " << ram.getHealth() << endl;
    ram.level='a';
    cout<< "level is: "<< ram.level<< endl;
    
}