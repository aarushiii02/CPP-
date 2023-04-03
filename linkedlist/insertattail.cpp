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
    return 0;
}