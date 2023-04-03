#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int d){
this->data=d;
this->prev=NULL;
this->next=NULL;
    }
    
};
void insertathead(node* &head,int d){
        node* temp=new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
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
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);
    insertathead(head,20);
    print(head);
    insertattail(tail,25);
    print(head);

    return 0;
}