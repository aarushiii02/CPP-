#include<iostream>
#include<cstring>
using namespace std;
class human{
public:
int height;
int age;
int weight;
public:
int getage(){
    return this->age;
}
void setweight(int w){
    this->weight=w;
}
};
class male:public human{
public:
string color;
void sleep(){
    cout<<"male sleeping"<<endl;
}
};
int main(){
    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;
    obj1.sleep();
    return 0;
}