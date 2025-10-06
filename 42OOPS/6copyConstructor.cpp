#include<iostream>
#include<string.h>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    // shallow copy
    char *name;

    Hero(){
        cout<<"constructor called"<< endl;
        name = new char[100];
    }
    Hero(Hero& temp){
        char *ch =new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name=ch;
        // cout<< " called"<< endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    
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
    void setName(char name[]){
        strcpy(this->name, name);
    }
    void print(){
        cout<< "name is: "<< this->name<< "   ";
        cout<< "health is: "<< this->health<< "   ";
        cout<< "level is: "<< this->level<< "   ";
        cout<< endl;
    }
};
int main(){
    Hero hero1;
    hero1.setHealth(80);
    hero1.setLevel('A');
    char name[7]="babbar";
    hero1.setName(name);
    Hero hero2(hero1);
    // hero hero2=hero1;
    hero1.print();
    hero2.print();
    hero1.name[0]='G';
    hero1.print();
    hero2.print();
    // copy assignment operator
    hero1=hero2;
    hero1.print();
    hero2.print();

}

/*
NOTE:
Shallow copy:here we are using same memory with diff names, from the above ex when we change the name of Hero 1, name of hero2 also changed
Deep Copy: creates diff memory.
*/