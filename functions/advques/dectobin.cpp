#include<iostream>
using namespace std;
int dectobin(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x*=2;
       
    } x/=2;
    while(x>0){
        int lastdig=n/x;
        n-=lastdig*x;
        x/=2;
        ans=ans*10+lastdig;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dectobin(n)<<endl;
}