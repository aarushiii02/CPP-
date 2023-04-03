#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    while(m !=n){
        if(m>n){
            m=m-n;
        }
        else if(m<n){
            n=n-m;
        }

    }
    cout<<m;
    return 0;
}