#include <iostream>
using namespace std;

//
//template <class T, int len>
//class LinkList             // ������ģ�塣
//{
//public:
//    T* m_head;          // ����ͷ��㡣
//    int  m_len = len;   // ����
//    void insert() { cout << "�������в�����һ����¼��\n"; }
//    void ddelete() { cout << "��������ɾ����һ����¼��\n"; }
//    void update() { cout << "�������и�����һ����¼��\n"; }
//};
//
//template <class T, int len>
//class Array                // ������ģ�塣
//{
//public:
//    T* m_data;          // ����ָ�롣
//    int  m_len = len;   // ����
//    void insert() { cout << "�������в�����һ����¼��\n"; }
//    void ddelete() { cout << "��������ɾ����һ����¼��\n"; }
//    void update() { cout << "�������и�����һ����¼��\n"; }
//};
//
//// ���Ա�ģ���ࣺtabletype-���Ա����ͣ�datatype-���Ա���������͡�
//template<template<class, int >class tabletype, class datatype, int len>
//class LinearList
//{
//public:
//    tabletype<datatype, len> m_table;     // �������Ա����
//
//    void insert() { m_table.insert(); }         // ���Ա���������
//    void ddelete() { m_table.ddelete(); }      // ���Ա�ɾ��������
//    void update() { m_table.update(); }      // ���Ա���²�����
//
//    void oper()     // ��ҵ��Ҫ��������Ա�
//    {
//        cout << "len=" << m_table.m_len << endl;
//        m_table.insert();
//        m_table.update();
//    }
//};
//
//int main()
//{
//    // �������Ա������������Ϊ�����������������Ϊint����Ϊ20��
//    LinearList<LinkList, int, 20>  a;
//    a.insert();
//    a.ddelete();
//    a.update();
//
//    // �������Ա������������Ϊ���飬�������������Ϊstring����Ϊ20��
//    LinearList<Array, string, 20>  b;
//    b.insert();
//    b.ddelete();
//    b.update();
//}

