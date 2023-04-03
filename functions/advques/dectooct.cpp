#include<iostream>
using namespace std;
int dectooct(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int lastdig=n/x;
        n-=lastdig*x;
        x/=8;
        ans=ans*10+lastdig;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dectooct(n)<<endl;

}