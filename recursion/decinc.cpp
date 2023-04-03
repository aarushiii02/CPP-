#include<iostream>
using namespace std;
void dec(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    inc(n-1);
    cout<<n<<endl;
}
int main(){
int n;
cin>>n;
dec(n);
inc(n);
return 0;
}