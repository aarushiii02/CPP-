#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
   
        int temp=arr[i];
        arr[i]=arr[n-1];  // conditions for swapping
        arr[n-1]=temp;

        for(int i=0;i<n;i++){ // array after swapping

             cout<<arr[i]<<" ";
        
      
    } 
    
    return 0;

}