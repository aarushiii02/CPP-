#include<iostream>
using namespace std;
//function overloading 
// class apnacollege{
//     public:
//     void fun(){
//         cout<<"i am fun with 0 arg"<<endl;
//     }
//     void fun(int x){
//         cout<<"i am fun with int arg"<<endl;
//     }
//     void fun(double x){
//         cout<<"i am fun with double arg"<<endl;
//     }
// };
// int main(){
// apnacollege obj;
// obj.fun();
// obj.fun(4);
// obj.fun(4.6);
// }




//operator overloading
class complex{
private:
int real;int img;
public:
complex(int r,int i){
    real =r;
    img=i;
}
complex operator + (complex const &obj){
    complex res;
    res.img=img +obj.img;
    res.real=real +obj.real;
    return res;
}
void display(){
    cout<<real<<" +i"<<img<<endl;
}

};
int main(){
complex c1(12,7);
complex c2(4,7);
complex c3=c1+c2;
c3.display();
return 0;
}