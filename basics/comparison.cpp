#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // if(n>10){
    //     cout<<n<<" "<<"is greater than 10"<<endl;
    // }
    // else if(n<10){
    //     cout<<n<<" "<<"is less than 10"<<endl;
    // }
    // else{
    //     cout<<n<<" "<<"is equal to 10"<<endl;
    // }
    if(n%2==0 && n%3==0){
        cout<<"divisible by both 2 and 3"<<endl;
    }
    else if(n%2==0){
        cout<<"divisible by 2 only"<<endl;
    }
    else if(n%3==0){
        cout<<"divisible by 3 only"<<endl;
    }
    return 0;
    
}