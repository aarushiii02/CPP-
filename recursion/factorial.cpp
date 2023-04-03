#include<iostream>
#include<climits>
using namespace std;
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case
    int prevfact=fact(n-1);
    return n*prevfact;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;

}