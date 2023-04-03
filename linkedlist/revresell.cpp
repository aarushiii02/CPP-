#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
 node(int d){
    this->data=d;
    this->next=NULL;
 }
};
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverse(node* &head ){
node* prevptr=NULL;
node* currptr=head;
node* nextptr;
while(currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;

}
return prevptr;
}
int main(){
node* node1=new node(1);
node* head=node1;
node* tail=node1;
insertattail(tail,2);
insertattail(tail,3);
insertattail(tail,4);
print(head);
node* newhead=reverse(head);
print(head);
return 0;

}