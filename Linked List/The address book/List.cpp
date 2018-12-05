//
// Created by 张国梁 on 2018/8/6.
//

#include "List.h"
#include <iostream>
#include "Node.h"
using namespace std;

List::List() {
    m_pList = new Node;
    //m_pList->data = 0;
    m_pList->next = NULL;
    m_iLength = 0;
}

List::~List() {
    ClearList();
    delete m_pList;
    m_pList = NULL;
}

int List::ListLength() {
    return m_iLength;
}

void List::ClearList() {
    Node *currentNode = m_pList->next;
    while(currentNode != NULL)
    {
        Node *temp = currentNode->next;
        delete currentNode;
        currentNode = temp;
    }
    m_pList->next = NULL;
    m_iLength = 0;
}

bool List::ListEmpty() {
    if(m_iLength == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    //return m_iLength == 0 ? true : false;
}

bool List::ListInsertHead(Node *pNode) {
    Node *temp = m_pList->next;
    Node *newNode = new Node; //从堆中申请内存，避免函数接收被回收
    if(newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    m_pList->next = newNode;
    newNode->next = temp;
    m_iLength++;
    return true;
}

bool List::ListInsertTail(Node *pNode) {
    Node *currentNode = m_pList;
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;  //找最后一个节点
    }
    Node *newNode = new Node; //从堆中申请内存，避免函数接收被回收
    if(newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = NULL;
    currentNode->next = newNode;
    m_iLength++;
    return true;
}

bool List::ListInsert(int i, Node *pNode) {
    if(i < 0 || i > m_iLength)
    {
        return false;
    }
    Node *currentNode = m_pList;
    for (int j = 0; j < i; j++) {
        currentNode = currentNode->next;  //找到第i个节点
    }
    Node *newNode = new Node; //从堆中申请内存，避免函数结束被回收
    if(newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = currentNode->next; //原来currentNode的下一个节点变成了newNode的下一个节点
    currentNode->next = newNode;  //newNode成为了currentNode的下一个节点
    m_iLength++;
    return true;
}

bool List::ListDelete(int i, Node *pNode) {
    if(i < 0 || i >= m_iLength)
    {
        return false;
    }
    Node *currentNode = m_pList;
    Node *currentNodeBefore = NULL;
    for (int j = 0; j <= i; j++) {
        currentNodeBefore = currentNode;
        currentNode = currentNode->next;
    }

    currentNodeBefore->next = currentNode->next;
    pNode->data = currentNode->data;
    delete currentNode;
    currentNode = NULL;
    m_iLength--;
    return true;
}

bool List::GetElem(int i, Node *pNode) {
    if (i < 0 || i >= m_iLength) {
        return false;
    }
    Node *currentNode = m_pList;
    Node *currentNodeBefore = NULL;
    for (int j = 0; j <= i; j++) {
        currentNodeBefore = currentNode;
        currentNode = currentNode->next;    //找到第i个节点
    }
    pNode->data = currentNode->data;
    return true;
}

int List::LocateElem(Node *pNode) {
    Node *currentNode = m_pList;   //头节点数据域没有意义
    int count = 0; //计数变量
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;    //一直找最后一个节点
        if(currentNode->data == pNode->data)
        {
            return count;
        }
        count++;
    }
    return -1;
}

bool List::PriorElem(Node *pCurrentNode, Node *pPreNode) {
    Node *currentNode = m_pList;   //头节点数据域没有意义
    Node *tempNode = NULL;
    while(currentNode->next != NULL)
    {
        tempNode = currentNode;
        currentNode = currentNode->next;    //一直找最后一个节点
        if(currentNode->data == pCurrentNode->data)
        {
            if(tempNode == m_pList)     //判断是不是头节点
            {
                return false;
            }
            pPreNode->data = tempNode->data;
            return true;
        }
    }
    return false;
}

bool List::NextElem(Node *pCurrentNode, Node *pNextNode) {
    Node *currentNode = m_pList;
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;    //一直找最后一个节点
        if(currentNode->data == pCurrentNode->data)
        {
            if(currentNode->next == NULL)     //判断是不是头节点
            {
                return false;
            }
            pNextNode->data = currentNode->next->data;
            return true;
        }
    }
    return false;
}

void List::ListTraverse() {
    Node *currentNode = m_pList;
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        currentNode->printNode();
    }
}