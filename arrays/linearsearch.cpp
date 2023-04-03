#include<iostream>
using namespace std;
// int linear(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//       if(arr[i]==key){
//         return i;
// }
//     }
//     return -1;
// }
int main(){
    int n,i;
    bool found=false;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    
    cout<<endl;
    for(i=0;i<n;i++){
      if(arr[i]==key){
        cout<<i<<endl;
       found=true;
        break;
      }
    }
   if(found){
    cout<<i;
   } else{
    cout<<"-1";
   }
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<linear(arr,n,key)<<endl;
     
return 0;
}