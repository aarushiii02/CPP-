#include<iostream>
#include<cstring>
using namespace std;
class student{
    private:
string name;
int age;
int height;


public:
int getage(){
    return this->age;
}
};
int main(){
    student first;
    cout<<"all well"<<endl;
    return 0;
}