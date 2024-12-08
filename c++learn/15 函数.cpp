#include<iostream>
#include<string>
using namespace std;

/*
	函数的定义一般主要有5个步骤：
		1.返回值类型 ：一个函数可以返回一个值。在函数定义中
		2.函数名：给函数起个名称
		3.参数列表：使用该函数时，传入的数据
		4.函数体语句：花括号内的代码，函数内需要执行的语句
		5.return表达式： 和返回值类型挂钩，函数执行完后，返回相应的数据
	*/
// 总结：函数定义里小括号内称为形参，函数调用时传入的参数称为实参

// 定义一个加法函数，实现两个数相加
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//
///*
//	值传递:函数调用时实参将数值传入给形参
//	值传递时，如果形参发生，并不会影响实参
//*/
//// 定义函数，实现两个数字进行交换函数
//// 如果函数不需要返回值，声明的时候可以写void
//// 总结： 值传递时，形参是修饰不了实参的
//void swap(int num1, int num2)
//{
//	cout << "交换前：" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "交换后：" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//
//	//return; 返回值不需要的时候，可以不写return
//}
//
//
//int main()
//{
//	// main函数中调用add函数
//	int a = 10;
//	int b = 10;
//
//	// 函数调用语法：函数名称（参数）；
//	int c = add(a, b);
//
//	cout << "c=" << c << endl;
//
//	a = 100;
//	b = 100;
//
//	int sum = add(a, b);
//	cout << "sum = " << sum << endl;
//
//	int e = 1000;
//	int d = 2000;
//	swap(e, d);
//	cout << "e=" << e << endl;
//	cout << "d=" << d << endl;
//
//	system("pause");
//
//	return 0;
//}