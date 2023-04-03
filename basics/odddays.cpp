#include<iostream>
using namespace std;
int main(){
    int pocketm=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        cout<<"can go out"<<endl;
        if(pocketm==0){
            break;
        }
        pocketm=pocketm-300;
    }
    return 0;
}