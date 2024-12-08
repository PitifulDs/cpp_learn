//#include<iostream>
//using namespace std;
//
//template <class T1, class T2=string> //可以使用缺省来指定
////template <class T1, class T2>
//class AA
//{
//public:
//	T1 m_a; // 通用类型用于成员变量
//	T2 m_b;	// 通用类型用于成员变量
//
//	AA(){}	// 默认构造函数为空
//	// 通用类型用于成员函数的参数
//	AA(T1 a, T2 b):m_a(a), m_b(b){}
//
//	// 通用类型用于成员函数的返回值
//	T1 geta()
//	{
//		T1 a = 2;		// 通用类型用于成员函数的代码中
//		return m_a + a;
//	}
//
//	T2 getb();
//	//{
//	//	//T1 b = 1;		//	通用类型用于成员函数的代码中
//	//	//return m_b + b;
//	//	return m_b;
//
//};
//
//template <class T1, class T2>
//T2 AA<T1, T2>::getb()
//{
//	//T1 b = 1;		//	通用类型用于成员函数的代码中
//	//return m_b + b;
//	return m_b;
//}
//
//
//int main()
//{
//	AA<int, double> a;	// 用模板类AA创建对象a
//	//AA<> a;	错误的
//	a.m_a = 20; a.m_b = 30;
//	cout << "a.geta()=" << a.geta() << endl;
//	cout << "a.getb()=" << a.getb() << endl;
//
//	AA<int, string> b;
//	b.m_a = 20; b.m_b = "西施";
//	cout << "b.geta()=" << b.geta() << endl;
//	cout << "b.getb()=" << b.getb() << endl;
//
//	// AA是类模板名，不是类名，不是一种具体的数据类型， AA<数据类型，数据类型>才是类名，一种具体的数据类型
//	AA<int, string>* c = new AA<int, string>(3, "北京");		// 用模板类AA创建对象c
//	cout << "c->geta()=" << c->geta() << endl;
//	cout << "c->getb()=" << c->getb() << endl;
//	delete c;
//}