#include<iostream>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b;
    // b=++a;
    // cout<<a<<" "<<b<<endl;
    // b=a++;
    // cout<<a<<" "<<b<<endl;
    k= a + b + ++a + b++ + a++ + ++b;
    cout<<k<<endl;
    return 0;
}