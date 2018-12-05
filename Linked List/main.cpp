/*
 * 链表（数据域|指针域）：1静态链表
 *                    2单链表
 *                   3循环链表（（正向）指针域|数据域|指针域（反向））
 *                   4双向链表
 */

 /*
  * 线性表--单链表
  *
  */
#include <iostream>
using namespace std;
#include "List.h"
#include "Node.h"

int main() {
    List *pList = new List();

    Node node1;
    node1.data = 3;
    Node node2;
    node2.data = 4;
    Node node3;
    node3.data = 5;
    Node node4;
    node4.data = 6;
    Node node5;
    node5.data = 7;

    Node temp;

//    pList->ListInsertHead(&node1);
//    pList->ListInsertHead(&node2);
//    pList->ListInsertHead(&node3);
//    pList->ListInsertHead(&node4);

    pList->ListInsertTail(&node1);
    pList->ListInsertTail(&node2);
    pList->ListInsertTail(&node3);
    pList->ListInsertTail(&node4);

    pList->ListInsert(1,&node5);

    //pList->ListDelete(1,&temp);

    //pList->GetElem(1,&temp);

    //pList->PriorElem(&node5,&temp);

    pList->NextElem(&node5,&temp);

    pList->ListTraverse();

    cout << "temp = " << temp.data << endl;

    delete pList;
    pList = NULL;
    return 0;
}