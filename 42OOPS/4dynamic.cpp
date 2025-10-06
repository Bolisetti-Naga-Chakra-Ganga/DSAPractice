#include<iostream>
using namespace std;
class Hero{
    public:
    int rank;
    char level;
    // here we are creating another constructor. whenever we create a new Hero obj, then this constructor will be called and the default constructor won't be used
    Hero(){
        // cout<< "constructor called "<< endl ;
        cout<< &Hero() << endl;
    }

};

int main(){
    // cout<< "before creating object"<< endl;
    // creating an object
    Hero ram;

    // cout<< "after creating object"<< endl;
    Hero *h = new Hero();
    cout<< h << endl; // address will be stored in h 


    /*
    Hero a;
    a.rank=80;
    a.level='A';

    // static allocation 
    cout<< "level is: "<< a.level<< endl;
    cout<< "health is "<< a.rank<< endl;

    Hero *b= new Hero;
    b->level='E';
    b->rank=60;

    // accessing 
    cout<< "level is: "<< (*b).level<< endl;
    cout<< "health is "<< (*b).rank<< endl;

    // another way of accessing
    cout<< "level is: "<< b->level<< endl;
    cout<< "health is "<< b->rank<< endl;

    */

}