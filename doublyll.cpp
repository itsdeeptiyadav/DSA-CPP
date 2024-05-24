#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * prev;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;

    }

};
void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" " ;
        temp=temp->next;
    }
}
int getlength(node *head){
    node *temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
void insertathead(node *&head,int d){
    node * temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head =temp;
}
void insertattail(node *&tail,int d){
    node * temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
void insertatmiddle(node* &head,node* &tail,int d,int pos){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    node *latest=new node(d);
    node * temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    latest->next=temp->next;
    temp->next->prev=latest;
    temp->next=latest;
    latest->prev=temp;
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

}
int main(){
    node *hii=new node(20);
    print(hii);
    cout<<endl;
    cout<<getlength(hii);
    cout<<endl;
    node * head=hii;
    node *tail=hii;
    insertathead(head,9);
    insertattail(tail,5);
    insertattail(tail,7);
    print(head);
    cout<<endl;
    insertathead(head,4);
    insertatmiddle(head,tail,12,3);
    insertatmiddle(head,tail,15,5);
    print(head);
}