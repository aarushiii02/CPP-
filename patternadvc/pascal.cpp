#include<iostream>
using namespace std;
int fact(int num){
    int facto=1;
    // if(num<0){
    //     cout<<"cant determined";
    // }
    // else if(num<=1){
    //     cout<<facto;
    // }
    // else{
        for(int i=2;i<=num;i++){
            facto=facto*i;
        }
        
    // }
    return facto;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
} 