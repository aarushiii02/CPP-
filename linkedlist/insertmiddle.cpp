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
void insertatposition(node* &tail,node* &head,int pos,int d){
    //for starting
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
//inserting at last
if(temp->next==NULL){
    insertattail(tail,d);
    return;
}
//creating a node for d
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
int main(){
     //create a node
    node* node1=new node(10);
    //head pointer to node
    node* head=node1;
    //tail pointer to node
    node* tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);
    insertatposition(tail,head,4,22);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}
