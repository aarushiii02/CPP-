#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
//     int i=2;
//    while(i<n){
//         if(n%i==0){
//             cout<<"not prime"<<endl;
//             break;
//         }
//         i++;
//    }
//    if(i==n){//i==n mtlb tb h ki loop pura finish hoga
//     cout<<"prime"<<endl;
//    }
bool flag=0;
//hum n ki jgh sqrtn tk bhi chk kr skte h kyuki jo sqrt se hojega vo mtlb badhe se bi hoga hi
//for(int i=2;i<sqrt(n);i++)
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"non prime"<<endl;
        flag=1;
        break;
        }
    
}
if(flag==0){
    cout<<"prime";
}
    return 0;
    }
   
    

