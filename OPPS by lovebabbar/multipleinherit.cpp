#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
public:
void bark(){
    cout<<"barking"<<endl;
}
};
class human{
public:
string color;
void speak(){
    cout<<"is speaking"<<endl;
}

};
class hybrid:public animal,public human{

};
int main(){
    hybrid obj;
    obj.speak();
    obj.bark();
    return 0;
}