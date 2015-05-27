#include "node.h"

#include <iostream>
using namespace std;
//#define NULL 0
Node::Node(int data):data(data)
{
    lchild=NULL;
    rchild=NULL;
    parent=NULL;
}

Node::Node(){}

Node::~Node(){}

void Node::append(Node *& node){
    if(lchild!=NULL){
        //rchild=new Node;
        rchild=node;
    }
    else{
        //lchild=new Node;
        lchild=node;
    }
    node->parent=this;
}

int Node::count(){
    int sum=0;
    preOrder(this,sum);
    return sum;
}

int Node::getValue(){
    return this->data;
}

Node * Node::getLchild(){
    return lchild;
}

Node * Node::getRchild(){
    return rchild;
}

Node * Node::getParent(){
    return parent;
}

void Node::preOrder(Node * node,int & sum){
    if(node!=NULL){
        sum+=node->data;
        if((node->lchild!=NULL||node->rchild!=NULL)){
            preOrder(node->lchild,sum);
            preOrder(node->rchild,sum);
        }
    }
}
