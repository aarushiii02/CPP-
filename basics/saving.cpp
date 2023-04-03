#include<iostream>
using namespace std;
int main(){
    int sav;
    cin>>sav;
    if(sav>7000){
        if(sav>10000){
            cout<<"roadtrip";
        }
        else{
            cout<<"shopping";
        }
    }
    else if(sav>5000){
        cout<<"neha";
    }
    else{
        cout<<"friends";
    }
    return 0;
}