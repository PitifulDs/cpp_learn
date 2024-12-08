//#include <iostream>
//using namespace std;
//
//void func()
//{
//
//}
//
//template<class T1, class T2>
//class AA
//{
//public:
//	T1 m_x;
//	T2 m_y;
//	AA(const T1 x, const T2 y):m_x(x), m_y(y){}
//	void show() const { cout << "show() x =" << m_x << ",y=" << m_y << endl; }
//
//};
//
//class BB
//{
//public:
//	void show() const { cout << "调用了BB的show()方法" << endl; }
//
//
//};
//// 采用普通函数，参数和返回值是模板类AA的实例化版本。
//AA<int, string> func(AA<int, string>& aa)
//{
//	aa.show();
//	cout << "调用了func(AA<int, string> &aa)函数。\n";
//	return aa;
//}
//
//// 函数模板，参数和返回值是的模板类AA。
//template <typename T1, typename T2>
//AA<T1, T2> func(AA<T1, T2>& aa)
//{
//	aa.show();
//	cout << "调用了func(AA<T1, T2> &aa)函数。\n";
//	return aa;
//}
//
//// 函数模板，参数和返回值是任意类型。
//template <typename T>
//T func(T& aa)
//{
//	aa.show();
//	cout << "调用了func(AA<T> &aa)函数。\n";
//	return aa;
//}
//
//int main()
//{
//	AA<int, string> aa(3, "我是一直杀杀鸟");
//	//AA<char, string> aa(3, "我是一直杀杀鸟");	// 调用函数模板版本
//	BB bb;
//	func(bb);
//
//
//
//
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
//
//
//
//
