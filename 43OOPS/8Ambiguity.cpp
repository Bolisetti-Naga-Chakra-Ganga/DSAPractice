#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<< "A "<<endl;
    }
};
class B{
    public:
    void func(){
        cout<< "B "<<endl;
    }
};
class C : public A, public B{

};
int main(){
    C obj;
    // obj.func();// creates an ambiguity since both Class A and B consists the same function with same name
    obj.A::func();
    obj.B::func();
}