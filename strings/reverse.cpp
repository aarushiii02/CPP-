#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
void reverse(int n,string s){
    int st=0;
    int end=n-1;
    while(st<end){
        swap(s[st++],s[end--]);
    }
    
    
}
int main(){
    int n;
    cin>>n;
    string s;
    getline(cin,s);
    cout<<s;
  reverse(n,s);
  cout<<s<<endl;
  return 0;
}