#include<iostream>
#include<string>
using namespace std;
class student{
public:
string name;
int age;
bool gender;
student(){
    cout<<"default constructor"<<endl;
}
student (string s,int a, bool g){
    cout<<"parameterised"<<endl;
    name=s;
    age=a;
    gender=g;
}//constructor
student(student &a){
    cout<<"copy"<<endl;
   name= a.name;
   age=a.age;
   gender=a.gender;
}
~student(){
    cout<<"destructor"<<endl;
}
bool operator == (student &a){
    if (name==a.name && age==a.age && gender==a.gender){
        return true;
    }
    else{
        return false;
    }
}
void printinfo(){
cout<<name<<endl;
cout<<age<<endl;
cout<<gender<<endl;
}
};
int main(){
    // student a;
    // a.name="urvi";
    // a.age=20;
    // a.gender=1;
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     cin>>arr[i].name;
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printinfo();
    // }    
    student a("urvi",20,1);
    a.printinfo();
    student b("rahul",20,0);
student c(a);
if(b==a){
    cout<<"same"<<endl;
}
else{
    cout<<"not same"<<endl;
}
    return 0;
}
