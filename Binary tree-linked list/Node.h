//
// Created by 张国梁 on 2018/8/7.
//

#ifndef ERCHASHU_LIANBIAO_NODE_H
#define ERCHASHU_LIANBIAO_NODE_H

#include <iostream>
using namespace std;

class Node {
public:
    Node();
    Node *SearchNode(int nodeIndex);
    void DeleteNode();               //删除结点
    void PreorderTraversal();
    void InorderTraversal();                                   //中序遍历
    void PostorderTraversal();                                 //后序遍历
    int index;
    int data;
    Node *pLChild;
    Node *pRChild;
    Node *pParent;
};



#endif //ERCHASHU_LIANBIAO_NODE_H
