#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int newterm;
    for(int i=0;i<n;i++){
       cout<<a<<endl;
        newterm=a+b;
        
        a=b;
        b=newterm;

    }
    
    return 0;
}