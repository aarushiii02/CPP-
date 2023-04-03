#include<iostream>
#include<string.h>
// #include<bits/stdc++.h>
using namespace std;
string dectohex(int n){
  int x=1;
  string ans="";
  while(x<=n){
    x*=16;
  }
  x/=16;
  int lastdig;
  while(x>0){
    lastdig=n/x;
    n = n - lastdig*x;
    x/=16;
    if(lastdig<=9){
      string str;
      str = to_string(lastdig);
      ans= ans + str ;
    }
    else{
        char c='A'+lastdig -10;
        ans.push_back(c);
    }
  }
  return ans;
}
int main(){
int n;
cin>>n;
cout<<dectohex(n)<<endl;
}