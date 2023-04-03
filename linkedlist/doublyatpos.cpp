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
    ~node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
void insertathead(node* &head,node* &tail,int d){
    //if empty list
    if(head==NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
    node* temp=new node(d);
   temp->next=head;
   head->prev=temp;
   head=temp;
    }
}
void insertattail(node* &tail,node* &head,int d){
    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void insertatpos(node* &head,node* &tail,int pos,int d){
    if(pos==1){
        insertathead(head,tail,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,head,d);
        return;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
void deletenode(node* &head,int pos){
if(pos==1){
    node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}
else{
    node* curr=head;
    node* prev=NULL;
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
}

void print(node* &head,node* &tail){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
        // cout<<"head "<<head->data<<endl;
        // cout<<"tail "<<tail->data<<endl;
        
    }
    cout<<endl;
}
int main(){
    // node* node1=new node(10);
    // node* head=node1;
    // node* tail=node1;
    node* head=NULL;
    node* tail=NULL;
    print(head,tail);
    insertathead(head,tail,20);
    print(head,tail);
    insertattail(tail,head,30);
    print(head,tail);
    insertatpos(head,tail,2,22);
    print(head,tail);
    insertatpos(head,tail,4,37);
    print(head,tail);
    deletenode(head,2);
    print(head,tail);
    return 0;
}