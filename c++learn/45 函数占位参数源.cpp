#include<iostream>
using namespace std;

/*
	C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置

	语法： 返回值类型 函数名 (数据类型){}	

	在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术

*/

int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

//int main() {
//
//	cout << "ret = " << func(20, 20) << endl;
//	cout << "ret = " << func(100) << endl;
//
//	system("pause");
//
//	return 0;
//}