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
node * findmid(node * head){
    // tortoise and hare approach
    node * slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
node * merge(node * left,node * right){
    if(left==NULL){
        return right;

    }
    if (right==NULL){
        return left;
    }
    node * ans=new node(-1);
    node * temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->data< right->data){
            temp->next=left;
            temp=left;
            left=left->next;

        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
        temp=left;
        left=left->next;

    }
    while(right!=NULL){
        temp->next=right;
            temp=right;
            right=right->next;

    }
    ans=ans->next;
    return ans;
}
node *mergesort(node * head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    node * mid=findmid(head);
    node * left=head;
    node * right=mid->next;
    mid-> next=NULL;
    left=mergesort(left);
    right=mergesort(right);
    node * result=merge(left,right);
    return result;
}
int main(){

}