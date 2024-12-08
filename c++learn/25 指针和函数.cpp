#include<iostream>
using namespace std;

// 总结：如果不想修改实参，就用值传递，如果想修改实参，就用地址传递

// 值传递
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01 a = " << a << endl;
//	cout << "swap01 b = " << b << endl;
//}
//
//// 地址传递
//void swap2(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//	cout << "swap02 a = " << *p1 << endl;
//	cout << "swap02 b = " << *p2 << endl;
//}
//
//int main()
//{
//	// 指针和函数
//	int a = 10;
//	int b = 20;
//
//	// 1.值传递
//	swap1(a, b);	// 值传递不会改变实参
//	
//	// 2.地址传递
//	swap2(&a, &b);	// 地址传递会改变实参
//	cout << " a = " << a << endl;
//	cout << " b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}