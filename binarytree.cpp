#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node * right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node *buildtree(node * root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    node * root= new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the left node";
    root->left=buildtree(root->left);
    cout<<"enter the right node";
    root->right=buildtree(root->right);
    return root;

}
void levelOrderTree(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        }
        if(temp->left){
            q.push(temp->left);

        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}