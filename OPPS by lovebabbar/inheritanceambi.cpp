#include<iostream>
using namespace std;
class A{
public:
void func(){
    cout<<"i am A"<<endl;
}
};
class B{
public:
void func(){
    cout<<"i am B"<<endl;
}
};
class C:public A,public B{
// public:
// void func3(){
//     cout<<"inside func3"<<endl;
// }
};
int main(){
    C obj;
    obj.A::func();
    obj.B::func();


    return 0;
}