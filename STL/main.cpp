/*
 *标准模版库 Standard Template Lib
 *  vector向量： 本质是对数组的封装； 特点：读取能在常数时间完成
 *  *******初始化vector对象的方式**********
 *  vector<T> v1;         vector保存类型为T的对象。默认构造函数v1为空
 *  vector<T> v2(v1);     v2是v1的一个副本
 *  vector<T> v3(n,i);    v3包含n个值为i的元素
 *  vector<T> v4(n);      v4包含有值初始化元素的n个副本
 *
 *  *********vector常用函数****************
 *  empty                 判断向量是否为空
 *  begin()               返回向量迭代器首元素
 *  end()                 返回向量迭代器末元素的下一个元素
 *  clear                 清空向量
 *  front()               第一个数据
 *  back()                最后一个数据
 *  size()                获得向量中数据的大小
 *  push_back(elem)       将数据插入向量尾
 *  pop_back()            删除向量尾部数据
 *  ...                   ...
 *
 *  遍历方法：
 *    1. 数组遍历
 *    2. 迭代器：iterator
 *
 *  链表:list  特点：数据插入速度快
 *
 *  映射:map   key(键)<->value(值)
 *      map<int, string> m;
 *      pair<int,string>p1(10,"shanghai");
 *      m.inset(p1);
 *      cout << m[10] << endl;
 */


#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
//    vector<int> vec;
//    vec.push_back(3);
//    vec.push_back(4);
//    vec.push_back(6);
//
//    //vec.pop_back();
//
//    //cout << vec.size() << endl;
//
////    for (int i = 0; i < vec.size(); i++)   //数组方式遍历
////    {
////        cout << vec[i] << endl;
////    }
//
//    vector<int>::iterator itor = vec.begin();
//    //cout << *itor << endl;
//    for (; itor != vec.end(); itor++)
//    {
//        cout << *itor << endl;
//    }
//
//    cout << vec.front() << endl;
//    cout << vec.back() << endl;

//    list<int> list1;
//    list1.push_back(4);
//    list1.push_back(7);
//    list1.push_back(10);
//
////    for (int i = 0; i < list1.size(); i++) {    //必须使用迭代器
////        cout << list1[i] << endl;
////    }
//
//    list<int>::iterator itor = list1.begin();
//    for (; itor != list1.end(); itor++) {
//        cout << *itor << endl;
//    }


    map<string, string> m;
    pair<string, string> p1("H","Hello");
    pair<string, string> p2("W","World");
    pair<string, string> p3("B","beijing");

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    cout << m["H"] << endl;
    cout << m["B"] << endl;
//    cout << m[3] << endl;
//    cout << m[6] << endl;

    map<string, string>::iterator itor = m.begin();
    for (; itor != m.end(); itor++) {
        cout << itor->first << endl;
        cout << itor->second << endl;
    }
    return 0;
}