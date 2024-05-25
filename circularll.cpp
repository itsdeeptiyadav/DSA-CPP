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
    node*temp=tail;
    do{
        cout<<tail->data;
        cout<<endl;
        tail=tail->next;
    }
    while(tail!=temp);
}
int main(){
    node* tail=NULL;
    
    insertattail(tail,10,3);
    insertattail(tail,8,10);
    insertattail(tail,9,10);
    print(tail);

}