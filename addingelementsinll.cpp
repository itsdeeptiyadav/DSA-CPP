#include<iostream>
#include<cmath>
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
void deletion(node* &head,int position){
    int cnt=1;
    if(position==1){
        node * temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
       node * curr=head;
       node *prev=NULL;
       while(cnt<=position-1){
        prev=curr;
        curr=curr->next;
        cnt++;
        }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}
int find(node * &head){
    int count=0;
    node * temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int add(node * head1,node *head2){
    double n1=find(head1);
    double n2=find(head2);
    double number1=0;
    double number2=0;
    node * temp1=head1;
    node* temp2=head2;
    while(temp1!=NULL&&n1>=0){
       number1=number1+(temp1->data*(pow(10,n1-1)));
       temp1=temp1->next;
       n1--; 
    }
    while(temp2!=NULL&&n2>=0){
       number2=number2+(temp2->data*(pow(10,n2-1)));
       temp2=temp2->next;
       n2--; 
    }
    return number1+number2;
}
int main(){
    node* node1=new node(9);
    node *head=node1;
    node*tail=node1;
    insertdata(head,7);
    insertattail(tail,6);
    insertatmid(head,tail,7,1);
    deletion(head,1);
    print(head);
    node * node2= new node(7);
    node *h1=node2;
    insertdata(h1,9);
    cout<<endl;
    print(h1);
    cout<<add(head,h1);
    
}