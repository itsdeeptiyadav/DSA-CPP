#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        this->data=d;
        this->next=NULL;

    }
};

void insertdata(node* &head,int d){
    node * temp=new node(d);
    temp->next=head;
    head=temp;

}
void insertattail(node* &tail,int d){
    node *temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void insertatmid(node *&head,int d,int position){
    node* temp=head;
    int cnt=1;
    while(cnt<=position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
int main(){
    node* node1=new node(10);
    node *head=node1;
    node*tail=node1;
    insertdata(head,12);
    insertattail(tail,25);
    insertatmid(head,8,1);
    print(head);
}