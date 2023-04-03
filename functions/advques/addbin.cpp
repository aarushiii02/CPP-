#include<iostream>
using namespace std;
int addbin(int a,int b){
    int ans=0;
    int prevcarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+prevcarry;
            prevcarry=0;
        }
        else if(a%2==0 && b%2==1 || a%2==1 && b%2==0){
            if(prevcarry==1){
                ans=ans*10 +0;
                prevcarry=1;

            }
            else{
                ans=ans*10+1;
            }
        }
        else{
            ans=ans*10+prevcarry;
            prevcarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(prevcarry==1){
            ans=ans*10+0;
            prevcarry=1;
        }
        else{
            ans=ans*10+1;
            prevcarry=0;
        }
    }
    return ans;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<addbin(a,b)<<endl;
}