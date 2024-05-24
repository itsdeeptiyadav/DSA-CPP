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
int main(){
    node *hii=new node(20);
    print(hii);
    cout<<endl;
    cout<<getlength(hii);
    cout<<endl;
    node * head=hii;
    insertathead(head,9);
    print(head);
}