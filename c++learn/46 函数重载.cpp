#include<iostream>
using namespace std;

/*
**作用：**函数名可以相同，提高复用性

函数重载满足条件：
	1:同一个作用域下
	2:函数名称相同
	3:函数参数类型不同 或者 个数不同 或者 顺序不同
	注意: 函数的返回值不可以作为函数重载的条件
*/

//void func()
//{
//	cout << "func的调用" << endl;
//
//}
//
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//
//}
//
//void func(double a)
//{
//	cout << "func(d a)的调用" << endl;
//
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b)的调用" << endl;
//
//}

//int func(double a, int b)
//{
//	cout << "func(double a, int b)的调用" << endl;
//
//}
//函数重载注意事项
//1、引用作为重载条件

void func1(int& a)
{
	cout << "func (int &a) 调用 " << endl;
}

void func1(const int& a)
{
	cout << "func (const int &a) 调用 " << endl;
}


//2、函数重载碰到函数默认参数

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a) 调用" << endl;
}
//int main() 
//{
//	//func();
//	//func(10);
//	//func(2.13);
//	//func(10, 3.14)
//	//func(2.3, 10);
//	int a = 10;
//	func1(a);
//	func1(10);
//	//func2(10); //碰到默认参数产生歧义，需要避免
//	system("pause");
//	return 0;
//
//}








