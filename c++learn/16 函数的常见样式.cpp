#include<iostream>
#include<string>
using namespace std;

/*
	常见的函数样式有4种:
						1.无参无返
						2.有参无返
						3.无参有返
						4.有参有返
*/

////1、 无参无返
//void test01()
//{
//	//void a = 10; //无类型不可以创建变量,原因无法分配内存
//	cout << "this is test01" << endl;
//	//test01(); 函数调用
//}
//
////2、 有参无返
//void test02(int a)
//{
//	cout << "this is test02" << endl;
//	cout << "a = " << a << endl;
//}
//
////3、无参有返
//int test03()
//{
//	cout << "this is test03 " << endl;
//	return 10;
//}
//
////4、有参有返
//int test04(int a, int b)
//{
//	cout << "this is test04 " << endl;
//	int sum = a + b;
//	return sum;
//}
//
//int main()
//{
//	// 无参无返调用
//	test01();
//
//	// 有参无返调用
//	test02(100);
//
//	// 无参有返调用
//	int num1 = test03();
//	cout << "num1=" << num1 << endl;
//
//	// 有参有返调用
//	int num2 = test04(10000, 1);
//	cout << "num2=" << num2 << endl;
//	system("pause");
//
//	return 0;
//}