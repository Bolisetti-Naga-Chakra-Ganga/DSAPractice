#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    
    //custom constructor similar to default constructor
    Hero(){
        cout<< "called"<< endl;
    }
    
    // parameterized costrct-1
    Hero(int health){
        // cout<< "second constructor called "<< endl;
        // using "this" keyword
        this->health=health;
    }

    // parameterized costrct-2
    Hero(int health, char level){
        // cout<< "Third constructor called "<< endl;
        // using "this" keyword
        this->health=health;
        this->level =level ;
    }

    //custom copy constructor
    //here if we don't use & then it will convert to an infinite loop
    Hero(Hero& temp){
        cout<< "called"<< endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<"level is:  " <<this->level << endl;
        cout<<"health is: " << this->health<< endl;
    }

};
int main(){
    Hero mahesh(80, 'M');
    mahesh.print();
    
    // copy constructor
    Hero rithesh(mahesh);  // props of mahesh will be copied to rithesh
    rithesh.print();
    
    /*
    // when we construct a custom constructor default constructor won't work. so we need to create another costructor similar to default constructor, if we want to create an obj using custom constructor.
    Hero ram;
    ram.level='R';
    ram.print(); // prints a garbage value since we haven't allocated any char for level variable
    // cout<<"Address of ram -> "<< &ram<< endl<< endl;

    // calling parameterized constructor
    Hero kalyan(80);
    kalyan.print();
    // cout<<"Address of kalyan -> "<< &kalyan<< endl<< endl;

    //dynamic way of creating an obj
    Hero *nani=new Hero(100);
    nani->print();
    // cout<<"Address of nani -> "<< &nani<< endl<< endl;

    Hero temp(60, 'G');
    temp.print();
    */
}