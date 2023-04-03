#include<iostream>
#include<string>
using namespace std;
void allsub(std::string s,std::string ans){
    //base case
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    //recursive case
    char ch=s[0];
    int code=ch;
    std::string ros=s.substr(1);
    allsub(ros,ans);
    allsub(ros,ans+ch);
    allsub(ros,ans+to_string(code));
}

int main(){
allsub("ABc","");
return 0;
}
