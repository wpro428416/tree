#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <string>
class Node{
private:
    int data;
    Node * lchild;
    Node * rchild;
    Node * parent;
public:
    Node(int data);
    Node();
    ~Node();
    void append(Node *& node);
    int count();
    Node * getParent();
    Node * getLchild();
    Node * getRchild();
    void preOrder(Node * node,int & sum);
    int getValue();
};

#endif // NODE_H_INCLUDED
