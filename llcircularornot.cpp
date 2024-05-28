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
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
    }

};
void insertattail(node*&tail,int d,int number){
    if(tail==NULL){
        node * newnode= new node(d);
        tail=newnode;
        newnode->next=newnode;
        
    }
    else{
        node *curr=tail;
        while(curr->data!=number){
            curr=curr->next;
        }
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }


    
}
void print(node* tail){
    if(tail==NULL){
        cout<<"linked list is empty";
        return;
    }
    
    node*temp=tail;
    do{
        cout<<tail->data;
        cout<<endl;
        tail=tail->next;
    }
    while(tail!=temp);
    
}
void deletion(node *&tail,int value){
    if(tail==NULL){
        cout<<"linked list is empty";
        return;
    }
    node* prev=tail;
    node* curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    if(curr==prev){
        tail=NULL;
    }
    else if(tail==curr){
        tail=prev;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

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
node * floyddetect(node* head){
    if(head==NULL){
        return NULL;
    }
    node * slow=head;
    node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;

}
int main(){
    node* tail=NULL;
    
    insertattail(tail,10,3);
    insertattail(tail,8,10);
    insertattail(tail,9,10);
    insertattail(tail,12,8);
    insertattail(tail,6,12);
    cout<<boolalpha;
    cout<<iscircular(tail);
    

}