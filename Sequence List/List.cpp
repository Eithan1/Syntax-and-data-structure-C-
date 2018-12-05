//
// Created by 张国梁 on 2018/8/5.
//

#include "List.h"
#include <iostream>
using namespace std;

List::List(int size) {
    m_iSize = size;
    m_pList = new Coordinate[m_iSize];
    m_iLength = 0;
}

List::~List() {
    delete []m_pList;
    m_pList = NULL;
}

int List::ListLength() {
    return m_iLength;
}

void List::ClearList() {
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

bool List::GetElem(int i, Coordinate *e) {
    if(i < 0 || i >= m_iSize)
    {
        return false;
    }
    *e = m_pList[i];
    return true;
}

int List::LocateElem(Coordinate *e) {
    for (int i = 0; i < m_iLength; i++) {
        if(m_pList[i] == *e)
        {
            return i;
        }
    }
    return -1;
}

bool List::PriorElem(Coordinate *currentElem, Coordinate *preElem) {
    int temp = LocateElem(currentElem);
    if(temp == -1)
    {
        return false;
    }
    else
    {
        if(temp == 0)
        {
            return false;
        }
        else
        {
            *preElem = m_pList[temp-1];
            return true;
        }
    }
}

bool List::NextElem(Coordinate *currentElem, Coordinate *nextElem) {
    int temp = LocateElem(currentElem);
    if(temp == -1)
    {
        return false;
    }
    else
    {
        if(temp == m_iLength - 1)
        {
            return false;
        }
        else
        {
            *nextElem = m_pList[temp + 1];
            return true;
        }
    }
}

void List::ListTraverse() {
    for (int i = 0; i < m_iLength; i++) {
        cout << m_pList[i] << endl;
    }
}

bool List::ListInsert(int i, Coordinate *e) {
    if(i < 0 || i > m_iLength)
    {
        return false;
    }

    for (int j = m_iLength - 1; j >= i; j--) {
        m_pList[j+1] = m_pList[j];
    }
    m_pList[i] = *e;

    m_iLength++;

    return true;
}

bool List::ListDelete(int i, Coordinate *e) {
    if(i < 0 || i >= m_iLength)
    {
        return false;  //return之后代码不执行
    }

    *e = m_pList[i];

    for (int j = i+1; j < m_iLength ; j++) {
        m_pList[j-1] = m_pList[j];
    }

    m_iLength--;
    return true;
}