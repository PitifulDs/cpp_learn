#include<iostream>
using namespace std;

/*
	C++中拷贝构造函数调用时机通常有三种情况:
		1:使用一个已经创建完毕的对象来初始化一个新对象
		
		2:值传递的方式给函数参数传值
		
		3:以值方式返回局部对象
		
*/

//class Person
//{
//public:
//	Person()
//	{	
//		cout << "Person默认构造函数调用" << endl;
//	}
//	
//	~Person()
//	{
//		cout << "Person有参析构函数调用" << endl;
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
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//
//	int m_Age;
//
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
//
//
////2. 值传递的方式给函数参数传值
////相当于Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //无参构造函数
//	doWork(p);
//}
//
////3. 以值方式返回局部对象
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