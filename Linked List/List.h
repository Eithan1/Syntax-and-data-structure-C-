//
// Created by 张国梁 on 2018/8/5.
//

#ifndef LIANBIAO_LIST_H
#define LIANBIAO_LIST_H

#include "Node.h"


class List {

public:
    List();
    ~List();
    void ClearList();
    bool ListEmpty();
    bool GetElem(int i, Node *pNode);
    int LocateElem(Node *pNode);
    int ListLength();
    bool PriorElem(Node *pCurrentNode, Node *pPreNode);
    bool NextElem(Node *pCurrentNode, Node *pNextNode);
    void ListTraverse();
    bool ListInsert(int i, Node *pNode);
    bool ListDelete(int i, Node *pNode);
    bool ListInsertHead(Node *pNode);
    bool ListInsertTail(Node *pNode);

private:
    Node *m_pList;
    int m_iLength;
};


#endif //LIANBIAO_LIST_H
