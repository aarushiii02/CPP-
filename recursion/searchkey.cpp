#include<iostream>
using namespace std;
int firstoccur(int arr[],int n,int i,int key){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case
    if(arr[i]==key){
        return i;
    }
    return firstoccur(arr,n,i+1,key);
}
int lastoccur(int arr[],int n, int i, int key){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case
    int restarray= lastoccur(arr,n,i+1,key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
    int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<firstoccur(arr,n,0,key)<<endl;
    cout<<lastoccur(arr,n,0,key)<<endl;
    return 0;
}