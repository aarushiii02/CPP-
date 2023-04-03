#include<iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"enter 2 numbere: "<<endl;
    cin>>i>>j;
    char op;
    cout<<"enter operation: "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<i+j<<endl;
        break;
        case '-':
    cout<<i-j<<endl;
        break;
        case '*':
    cout<<i*j<<endl;
        break;
        case '/':
    cout<<i/j<<endl;
        break;
        case '%':
    cout<<i%j<<endl;
        break;

    
    default:
    cout<<"no data found"<<endl;
            break;
    }
}