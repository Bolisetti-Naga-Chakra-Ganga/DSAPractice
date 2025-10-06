#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"function 1 called"<< endl;
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"function 2 called"<< endl;
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"function 3 called"<< endl;
    }
};
int main(){

    A object1;
    cout<< "A "<< endl;
    object1.func1();

    B object2;
    cout<< "B "<< endl;
    object2.func1();
    object2.func2();

    C object3;
    cout<< "C "<< endl;
    object3.func1();
    object3.func3();




}