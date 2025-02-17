#include<iostream>

using namespace std;


/*

	在C++中成员变量和成员函数是分开存储的, 每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码

	那么问题是：这一块代码是如何区分那个对象调用自己的呢？

	1.c++通过提供特殊的对象指针，this指针，解决上述问题。this指针指向被调用的成员函数所属的对象

	2.this指针是隐含每一个非静态成员函数内的一种指针

	3.this指针不需要定义，直接使用即可

	this指针的用途：

	a.当形参和成员变量同名时，可用this指针来区分
	b.在类的非静态成员函数中返回对象本身，可使用return *this
*/

//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//1、当形参和成员变量同名时，可用this指针来区分
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person p)
//	{
//		this->age += p.age;
//		//返回对象本身
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	Person p1(10);
//	cout << "p1.age = " << p1.age << endl;
//
//	Person p2(10);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "p2.age = " << p2.age << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
//


























