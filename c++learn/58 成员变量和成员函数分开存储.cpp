#include<iostream>

using namespace std;

/*
	成员变量和成员函数分开存储
	1.在C++中，类内的成员变量和成员函数分开存储
	2.只有非静态成员变量才属于类的对象上

*/

//
//class Person {
//public:
//	Person() {
//		mA = 0;
//	}
//	//非静态成员变量占对象空间
//	int mA;
//	//静态成员变量不占对象空间
//	static int mB;
//	//函数也不占对象空间，所有函数共享一个函数实例
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//静态成员函数也不占对象空间
//	static void sfunc() {
//	}
//};
//
//int main() {
//
//	cout << sizeof(Person) << endl;
//
//	system("pause");
//
//	return 0;
//}










































