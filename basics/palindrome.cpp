#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int lastdig;
    int temp=n;
    while(n>0){
        lastdig=n%10;
        i=i*10 +lastdig;
        n=n/10;
    }
    cout<<i<<endl;
if(i==temp){
    cout<<"palindrome";
}
else{
    cout<<"non palindrome";
}
return 0;
}