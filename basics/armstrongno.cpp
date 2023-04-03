#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int lastdig;
    int original=n;
    while(n>0){
        lastdig=n%10;
        sum=pow(lastdig,3) + sum;
        n=n/10;
    }
    if(original==sum){
        cout<<"armstrong number";

    }else{
        cout<<"not armstrong";
    }
    return 0;

}