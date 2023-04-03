#include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    if(num<0){
        cout<<"cant determined";
    }else if(num<=1){
        cout<<fact;

    }else{
        for(int i=2;i<=num;i++){
            fact=fact*i;
    }
    }
    return fact;
    
}
int main(){
int n,r;
cin>>n>>r;
int ncr=fact(n)/(fact(r)*fact(n-r));
cout<<ncr;
return 0;
}