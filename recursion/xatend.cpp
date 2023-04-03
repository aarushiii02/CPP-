#include<iostream>
#include<string>
using namespace std;
string xatend(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=xatend(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return (ch+ans);
}int main(){
	
    cout<<xatend("axxbdxcefxhix");
    return 0;
}
       
