#include<iostream>
using namespace std;

/*
	C++�п������캯������ʱ��ͨ�����������:
		1:ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
		
		2:ֵ���ݵķ�ʽ������������ֵ
		
		3:��ֵ��ʽ���ؾֲ�����
		
*/

//class Person
//{
//public:
//	Person()
//	{	
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	
//	~Person()
//	{
//		cout << "Person�в�������������" << endl;
//		m_Age = 0;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//
//	int m_Age;
//
//};
//
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//
//	Person man(100); //p�����Ѿ��������
//	Person newman(man); //���ÿ������캯��
//	Person newman2 = man; //��������
//
//	//Person newman3;
//	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
//}
//
//
////2. ֵ���ݵķ�ʽ������������ֵ
////�൱��Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //�޲ι��캯��
//	doWork(p);
//}
//
////3. ��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}	
//
//int main()
//{
//
//	//test01();
//	//test02();
//	test03();
//
//
//	system("pause");
//
//	return 0;
//}