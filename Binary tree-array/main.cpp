/*
 * 二叉树（数组表示）
 *   完成树的基本操作
 *    1 树的创建和销毁
 *    2 树中节点的搜索
 *    3 树中节点的添加与删除
 *    4 树中节点的遍历
 *
 *    BOOL CreateTree(Tree **pTree, Node *pRoot);    //创建树
 *    void DestroyTree(Tree *pTree);                 //销毁树
 *    Node *SearchNode(Tree *pTree, int nodeIndex);  //根据索引寻找节点
 *    BOOL AddNode(Tree *pTree, int nodeIndex, int direction, Node *pNode); //添加节点
 *    BOOL DeleteNode(Tree *pTree, int nodeIndex, Node *pNode);  //删除节点
 *    void TreeTraverse(Tree *pTree);                //遍历
 */

#include <iostream>
#include "Tree.h"
using namespace std;

int main() {
    int root = 3;
    Tree *pTree = new Tree(10, &root);
    int node1 = 5;
    int node2 = 8;
    pTree->AddNode(0, 0, &node1);
    pTree->AddNode(0, 1, &node2);

    int node3 = 2;
    int node4 = 6;
    pTree->AddNode(1, 0, &node3);
    pTree->AddNode(1, 1, &node4);

    int node5 = 9;
    int node6 = 7;
    pTree->AddNode(2, 0, &node5);
    pTree->AddNode(2, 1, &node6);

    int node = 0;
    pTree->DeleteNode(6, &node);
    cout << "node=" << node << endl;

    pTree->TreeTraverse();

    int *p = pTree->SearchNode(2);

    cout << endl << "node=" << *p << endl;
    pTree = NULL;
    return 0;
}