#include<iostream>
#include<string>
using namespace std;
void reverse(string s){
//base case
if(s.length()==0){
    return;
}
//recursive case
string ros=s.substr(1);
reverse(ros);
cout<<s[0];
}
int main(){
    reverse("aarushi");
    return 0;
}