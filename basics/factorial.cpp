#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    if(n<0){
        cout<<"cant be determined";
    }
    else if(n<=1){
        cout<<fact;
    }
    else{
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        cout<<fact;
    }
    return 0;
}