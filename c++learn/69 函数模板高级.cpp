//#include <iostream>         // 包含头文件。
//using namespace std;        // 指定缺省的命名空间。
//
//
//template<typename  T1, typename T2>
//auto func(T1 x, T2 y) -> decltype(x+y)
//{
//
//	//auto tmp = x + y;
//	decltype(x + y) tmp = x + y;
//	cout << "tmp=" << tmp << endl;
//	return tmp;
//}
//
//int func()
//{
//	cout << "调用了func()函数。\n";
//	return 3;
//}
//
////语法：decltype(expression) var;
////1）如果expression是一个没有用括号括起来的标识符，则var的类型与该标识符的类型相同，包括const等限定符。
////2）如果expression是一个函数调用，则var的类型与函数的返回值类型相同（函数不能返回void，但可以返回void * ）。
////3）如果expression是一个左值（能取地址）(要排除第一种情况)、或者用括号括起来的标识符，那么var的类型是expression的引用。
////4）如果上面的条件都不满足，则var的类型与expression的类型相同。
//
//int main()
//{
//	short a = 5.5;
//	char b = 3;
//	//auto tmp = a + b;
//	func(a, b);
//	func(3, 5.8);
//	//short a1 = 5;
//	//short b1 = 10;
//
//	//short& ra = a1;
//	////decltype(ra) da = b1;
//	//decltype(func) *da = func;
//	//da();
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
