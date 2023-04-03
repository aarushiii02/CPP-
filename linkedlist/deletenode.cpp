#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data;
        //memory free 
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

};
void insertathead(node* &head,int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;

}
void insertatposition(node* &head,node* &tail,int pos,int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next=NULL){
        insertattail(tail,d);
        return;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletenode(int pos,node* &head){
    //deleting start node
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
 
    }
    else{
        //deleting any middle or last node
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
        
    }

}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);
    insertattail(tail,20);
    print(head);
    insertattail(tail,30);
    print(head);
    insertatposition(head,tail,4,40);
    print(head);
    deletenode(3,head);
    print(head);
    return 0;
}