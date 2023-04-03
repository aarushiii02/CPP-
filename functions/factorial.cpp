#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    if(n<0){
        cout<<"cant determined";
    }
    else if(n<=1){
        cout<<fact;
    }
    else{
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        
    }
    return fact;

}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<fact(n1)<<endl;
    cout<<fact(n2)<<endl;
    return 0;
}
