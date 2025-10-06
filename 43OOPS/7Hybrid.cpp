#include<iostream>
using namespace std;
// combination of atleast any two of the inheritance methods is a hybrid inheritance
class A{
    public:
    void funcA(){
        cout<< "func A called"<< endl;
    }
};
class D{
    public:
    void funcD(){
        cout<< "func D called"<< endl;
    }
};
class B: public A{
    public:
    void funcB(){
        cout<< "func B called"<< endl;
    }
};
class C: public A, public D{
    public:
    void funcC(){
        cout<< "func C called"<< endl;
    }
};
int main(){
    A a;
    cout<< "a"<< endl;
    a.funcA();
    B b;
    cout<< "b"<< endl;
    b.funcA();
    // b.funcB();
    C c;
    cout<< "c"<< endl;
    c.funcA();
    // c.funcC();
    c.funcD();
}