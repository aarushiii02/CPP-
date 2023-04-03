#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j;
                flag=true;
            }
        }
        cout<<endl;
    }
    if(flag){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}