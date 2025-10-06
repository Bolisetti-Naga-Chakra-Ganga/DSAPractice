#include<iostream>
using namespace std;
// compile time polymorphism
// here we declared functions with same name, but with a small change
// function overloading
class A{
    public:
    void sayHello(){
        cout<<"hello Love Babbar"<< endl;
    }
    void sayHello(char name){
        cout<<"hello "<< name<< endl;
    }   
    void sayHello(string name){
        cout<<"hello 1 "<< name  << endl;
    }   
};

//operator overload
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+(B& obj){
        // int value1 =this->a;
        // int value2=obj.a;
        // cout<< "output "<< value2-value1<< endl;
        cout<<"operator func"<<endl;
    }
    void operator () (){
        cout<< "called () function"<< endl;
    }
};


int main(){

    // operator overloading
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    // obj1+obj2;
    obj1();

    /*
    // function overload
    A obj;
    obj.sayHello();
    obj.sayHello('B');
    obj.sayHello("ram");
    return 0;
    */
}