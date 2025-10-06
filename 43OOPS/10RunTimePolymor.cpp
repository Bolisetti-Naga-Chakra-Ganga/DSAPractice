#include<iostream>
using namespace std;
// run time polymorphism is also called as dynamic polymorphism
// method overriding

class Human{
    public:
    // method/function overriding 
    void speak(){
        cout<< "Speaking"<< endl;
    }
};

class Animal: public Human{
    public:
    // method / function overriding
    void speak(){
        cout<< "Barking and Speaking"<< endl;
    }
};

int main(){
    Animal h;
    h.speak();
}