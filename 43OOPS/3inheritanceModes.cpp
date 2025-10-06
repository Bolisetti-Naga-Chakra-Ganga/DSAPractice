#include<iostream>
using namespace std;
class Human{
    // protected:
    private:
    int height;


    public:
    int weight;


    private:
    int age;
    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        return this->weight=w;
    }
};

class Male: private Human{
    public:
    string color;
    void sleep(){
        cout<< "male is sleeping"<< endl;
    }
    
    int getHeight(){
        // when we declare the parent class whatever may be the inheritance mode of the child class we cant access the data members of the parent class even to child class
        // return this->height;
    }
};

int main(){
    Male m1;
    cout<< m1.getHeight()<< endl;

}