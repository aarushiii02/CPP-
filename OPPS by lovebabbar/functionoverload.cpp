#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello aarushi"<<endl;
    }
    void sayhello(string name){
        cout<<"hello"<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayhello();
    return 0;
}