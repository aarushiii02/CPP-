#include<iostream>
using namespace std;
int main(){
    //square pattern
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //      for(int j=1;j<=n;j++){
    //          cout<<"*";
    //      }
    //     cout<<endl;
    // }

    int rows,cols;
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
