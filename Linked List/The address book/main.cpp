#include <iostream>

#include <iostream>
using namespace std;
#include "List.h"
#include "Node.h"


int menu()
{
    //显示通讯录功能菜单
    cout << "功能菜单" << endl;
    cout << "1.新建联系人" << endl;
    cout << "2.删除联系人" << endl;
    cout << "3.浏览通讯录" << endl;
    cout << "4.推出通讯录" << endl;

    cout << "请输入：";

    int order = 0;
    cin >> order;
    return order;
}

void createPerson(List *pList)
{
    Node node;

    Person person;
    cout << "请输入姓名：";
    cin >> person.name;
    cout << "请输入电话：";
    cin >> person.phone;
    node.data = person;
    pList->ListInsertTail(&node);
}


int main() {
    int userOrder = 0;

    List *pList = new List();

    while(userOrder != 4)
    {
        userOrder = menu();
        switch(userOrder)
        {
            case 1:
                cout << "用户指令--->>新建联系人：" << endl;
                createPerson(pList);
                break;
            case 2:
                cout << "用户指令--->>删除联系人：" << endl;
                break;
            case 3:
                cout << "用户指令--->>浏览通讯录：" << endl;
                pList->ListTraverse();
                break;
            case 4:
                cout << "用户指令--->>退出通讯录：" << endl;
                break;
        }
    }
    delete pList;
    pList = NULL;
//    List *pList = new List();
//
//    Node node1;
//    node1.data.name = "tester1";
//    node1.data.phone = "1234567";
//    Node node2;
//    node2.data.name = "tester2";
//    node2.data.phone = "2345678";
//
//    pList->ListInsertTail(&node1);
//    pList->ListInsertTail(&node2);
//
//    pList->ListTraverse();
//
//    delete pList;
//    pList = NULL;
    return 0;
}

