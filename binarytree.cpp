#include <iostream>
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