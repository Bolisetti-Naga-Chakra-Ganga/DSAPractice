#include<iostream>
using namespace std;
class Human{
    public:
    int height;
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

// public declaration
// class Male: public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<< "male is sleeping"<< endl;
//     }
// };

// class className: mode parentClassName
class Male: private Human{
    public:
    string color;
    void sleep(){
        cout<< "male is sleeping"<< endl;
    }
    // when we declare this childclass mode as private or protected we need to use getters to access the variable outside this class
    int getHeight(){
        return this->height;
    }
};
int main(){

    Male m1;
    // cout<< m1.height<< endl; // we can directly access the class as a public class
    // when we declare the mode as private or protected we can't access the data mems directly. so we use getters to access
    cout<<m1.getHeight()<< endl; 

    /*
    Male object1;
    cout<<object1.age<< endl;
    cout<<object1.weight<< endl;
    cout<<object1.height<< endl;
    cout<<object1.color<< endl;
    object1.setWeight(84);
    cout<<object1.weight<< endl;
    object1.sleep();
    */
}