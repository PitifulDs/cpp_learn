#include <iostream>         // ����ͷ�ļ���
using namespace std;        // ָ��ȱʡ�������ռ䡣

//class CAllComers {        // ��������
//public:
//    int  m_bh = 0;             // ��š�
//    virtual void show() { cout << "CAllComers::show()������" << m_bh << "�š� " << endl; }
//    virtual void show(int a) { cout << "CAllComers::show(int a)������" << m_bh << "�š� " << endl; }
//};
//
//class CGirl :public CAllComers {        // ��Ů��
//public:
//    int m_age = 0;           // ���䡣
//    void show() { cout << "CGirl::show()������" << m_bh << "�ţ� " << m_age << "�ꡣ" << endl; }
//    void show(int a) { cout << "CGirl::show(int a)������" << m_bh << "�ţ� " << m_age << "�ꡣ" << endl; }
//};
//
//int main()
//{
//    CAllComers a;  a.m_bh = 3;                             // ����������󲢶Գ�Ա��ֵ��
//    CGirl g;             g.m_bh = 8; g.m_age = 23;    // ������������󲢶Գ�Ա��ֵ��
//
//    CAllComers* p;            // ��������ָ�롣
//    //p = &a;   p->show();   // �û���ָ��ָ�������󣬲������麯����
//    p = &g;   p->show();   // �û���ָ��ָ����������󣬲������麯����
//    p->show(5);
//    p->CAllComers::show(5);
//}