#include<iostream>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"funcA"<<endl;
    }
};
class B:public A{
};
int main(){
B b;
b.Afunc();
return 0;
}