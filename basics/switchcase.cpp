#include<iostream>
using namespace std;
int main(){
    char button;
    cin>>button;
    switch (button)
    {
    case 'a':
    cout<<"hello"<<endl;
        break;
         case 'b':
    cout<<"hola"<<endl;
        break;
         case 'c':
    cout<<"namaste"<<endl;
        break;
         case 'd':
    cout<<"sault"<<endl;
        break;
         case 'e':
    cout<<"kemcho"<<endl;
        break;
    
    default:
    cout<<"i am still learning"<<endl;
        break;
    }
    return 0;
}