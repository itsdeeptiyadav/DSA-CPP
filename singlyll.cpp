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
node* addTwoNumbers(node* l1, node* l2) {
        node* temp=NULL;
        node *curr=l1;
        node *prev=l2;
        int carry=0;
        while(curr!=NULL && prev!=NULL){
            if(curr->data + prev->data +carry<10){
                int datanew=curr->data+ prev->data + carry;
                carry=0;
                if(temp!=NULL){
                    insertdata(temp,datanew);
                    

                }
                else{
                    temp=new node(datanew);
                }
                

            }
            else{
                int datanew=(curr->data + prev->data + carry)%10;
                carry=(curr->data+ prev->data + carry)/10;
                if(temp!=NULL){
                    insertdata(temp,datanew);

                }
                else{
                    temp=new node(datanew);
                }
                

                
                
            }
            curr=curr->next;
            prev=prev->next;
            

        }
        while(curr!=NULL){
            int datanew=curr->data+carry;
            if(datanew<10){
                insertdata(temp,datanew);
                carry=0;
            }
            else{
                insertdata(temp,datanew%10);
                carry=datanew/10;
                
            }
            curr=curr->next;
        }
        while(prev!=NULL){
            int datanew=prev->data+carry;
            if(datanew<10){
                insertdata(temp,datanew);
                carry=0;
            }
            else{
                insertdata(temp,datanew%10);
                carry=datanew/10;
                
            }
            prev=prev->next;
        }
        if(carry){
            insertdata(temp,carry);
        }
        return temp;

        
}
bool iscircular(node * head){
    if(head==NULL){
        return true;
    }
    
    node * temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}
int main(){
    node* node1=new node(9);
    node *head=node1;
    node*tail=node1;
    insertdata(head,12);
    insertattail(tail,25);
    insertatmid(head,tail,7,1);
    deletion(head,1);
    print(head);
    cout<<boolalpha;
    cout<<iscircular(head);
    node *hey=NULL;
    print(hey);
}