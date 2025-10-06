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
        cout<< "constructor called"<< endl;
    }

    ~Hero(){
        cout<< "distructor called"<< endl;
    }
};
int main(){
    // static
    // for statically created obj destructor will be called automatically
    Hero a;

    // dynamic way
    Hero *p= new Hero();
    // for dynamically created obj we need to call the destructor manually
    delete p;
    return 0;
}