#include<iostream>
#include<string>
using namespace std;
string removedup(string s){
    //base case
    if(s.length()==0){
        return "";
    }
    //recursive case
    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch ==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
cout<<removedup("aaaabbbccedddghhh");
return 0;
}
