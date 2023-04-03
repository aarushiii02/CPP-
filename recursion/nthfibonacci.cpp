#include<iostream>
using namespace std;
int fib(int n){
    //base case
    // if(n==0){
    //     return 0;
    // }
    // else if(n==1){
    //     return 1;
    // }
    if(n==0 || n==1){
        return n;
    }
    //recursive case
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
