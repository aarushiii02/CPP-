#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];//kyuki i+1 ko bhi chk krna h
    arr[n]=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1";
        return 0;
    }
    int mx=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(ans,arr[i]);

        
    }
    cout<<ans<<endl;
    return 0;
}