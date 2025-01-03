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
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
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
void insertatmid(node *&head,node* &tail,int d,int position){
    if(position==1){
        insertdata(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;

    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
node* reverse(node *& head){
    node * curr=head;
    node* prev=NULL;
    while(curr!=NULL){
        node *forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
    head=prev;
    return prev;
}
node * newreverse(node* &head){
    if(head == NULL||head->next==NULL){
        return head;

    }
    node* chotahead=newreverse(head->next);
    node * front=head->next;
    front->next=head;
    head->next=NULL;
    return chotahead;
}
node* kReverse(node * &head,int k){
    if(head==NULL){
        return head;
    }
    node * prev= NULL;
    node * curr= head;
    node * next=NULL;
    int count =0;
    while(curr !=NULL||count<k){
        next= curr->next;
        curr->next= prev;
        prev=curr;
        curr=next;
        count++;

    }
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    return prev; 
}

int main(){
    node* node1=new node(9);
    node *head=node1;
    node*tail=node1;
    insertdata(head,12);
    insertattail(tail,25);
    insertatmid(head,tail,7,1);
    insertatmid(head,tail,8,3);
    
    cout<<endl;
    // reverse(head);
    print(head);
    cout<<endl;
    node * z=kReverse(head,5);
    print(z);
    
    
}