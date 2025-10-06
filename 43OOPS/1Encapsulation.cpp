#include<iostream>
using namespace std;
// encapsulation is used to hide the info
class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
// **** INHERITANCE 

int main(){
    Student first;
    // cout<< first.getAge()<< endl;
    
}