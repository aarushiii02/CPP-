#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    float avg;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    avg=float(sum)/n;
    cout<<avg<<endl;
return 0;

}