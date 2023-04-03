#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    int lastdig;
    while(n>0){
        lastdig=n%10;
        reverse=reverse*10 + lastdig;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}