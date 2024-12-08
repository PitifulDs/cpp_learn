//#include <iostream>
//using namespace std;
//
//
//// 类模板
//template<class T1, class T2>
//class AA{
//public:
//	T1 m_x;
//	T2 m_y;
//
//	AA(const T1 x, const T2 y) :m_x(x), m_y(y) { cout << "类模板：构造函数\n"; }
//	void show() const;
//};
//
//
//template<class T1, class T2>
//void AA<T1, T2>::show() const{
//	cout << "类模板：x = " << m_x << ",y=" << m_y << endl;
//}
//
//
//// 类模板完全具体化，为通用数据参数指定具体类型
//template<>
//class AA<int, string> {
//public:
//	int		m_x;
//	string	m_y;
//
//	AA(const int x, const string y) :m_x(x), m_y(y) { cout << "完全具体化：构造函数\n"; }
//	void show() const;
//
//
//};
//void AA<int, string>::show() const {
//	cout << "完全具体化：x = " << m_x << ",y=" << m_y << endl;
//}
//
//// 类模板部分具体化
//template<class T1>
//class AA<T1, string> {
//public:
//	T1       m_x;
//	string m_y;
//
//	AA(const T1 x, const string y) :m_x(x), m_y(y) { cout << "部分具体化：构造函数。\n"; }
//	void show() const;
//};
//
//template<class T1>
//void AA<T1, string>::show() const {    // 成员函数类外实现。
//	cout << "部分具体化：x = " << m_x << ", y = " << m_y << endl;
//}
//
//
//
//
//
//int main()
//{
//	// 具体化程度高的类优先于具体化程度低的类，具体化的类优先于没有具体化的类。
//	AA<int, string>     aa1(8, "我是一只傻傻鸟。");   // 将使用完全具体化的类。
//	AA<char, string>	aa2(8, "我是一只傻傻鸟。");   // 将使用部分具体化的类。
//	AA<int, double>		aa3(8, 999999);                      // 将使用模板类。
//
//	return 0;
//}
