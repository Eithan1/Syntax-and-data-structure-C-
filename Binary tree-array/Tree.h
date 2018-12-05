//
// Created by 张国梁 on 2018/8/7.
//

#ifndef ERCHASHU_SHUZU_TREE_H
#define ERCHASHU_SHUZU_TREE_H


class Tree {
public:
    Tree(int size, int *pRoot);           //创建树
    ~Tree();                  //销毁数
    int *SearchNode(int nodeIndex);            //根据索引寻找结点
    bool AddNode(int nodeIndex, int direction, int *pNode);     //添加结点
    bool DeleteNode(int nodeIndex, int *pNode);       //删除结点
    void TreeTraverse();    //遍历结点
private:
    int *m_pTree;
    int m_iSize;
};


#endif //ERCHASHU_SHUZU_TREE_H
