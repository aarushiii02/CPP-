#include<iostream>
#include<climits>
using namespace std;
int power(int n,int p){
    //base case
    if(p==0){
        return 1;
    }
    //recursive case
int prevpower=power(n,p-1);
return n*prevpower;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    return 0;
}