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
node *sorting(node* &head){
    node * temp=head;
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    while(temp!=NULL){
        if(temp->data==0){
            zerocount++;
        }
        else if(temp->data==1){
            onecount++;
        }
        else if(temp->data==2){
            twocount++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data=1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data=2;
            twocount--;
        }
        temp=temp->next;
    }
    return head;
}
node * newsort(node * head1,node *&head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node * temp=head1;
    node *curr=head2;
    int data1=head1->data;
    int data2=head2->data;
    if(data1<data2){
        while(curr!=NULL&temp!=NULL) {
            while(curr->data>temp->data){
                temp->next=curr;
                if(curr->next->data>temp->next->data){
                    temp=temp->next;
                }
            curr=curr->next;
            
            }
        }
        return head1;   
    }
    else{
        while(curr!=NULL&temp!=NULL) {
            while(temp->data>curr->data){
                curr->next=temp;
                if(temp->next->data>curr->next->data){
                    curr=curr->next;
                }
            temp=temp->next;
            
            }
        }
        return head2;   

    }
}
int main(){
    node* node1=new node(0);
    node *head=node1;
    node*tail=node1;
    insertdata(head,1);
    insertattail(tail,0);
    insertatmid(head,tail,2,2);
    insertdata(head,2);
    insertattail(tail,2);
        // print(head);
        cout<<endl;
    node *z=sorting(head);
    print(z);
    cout<<endl;
    node* x=new node(11);
    node * q=x;
    insertdata(q,9);
    insertdata(q,7);
    insertdata(q,5);
    insertdata(q,3);
    print(q);
    node * w=newsort(z,q);
    cout<<endl;
    print(w);

}