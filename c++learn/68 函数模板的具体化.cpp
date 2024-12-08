//#include <iostream>         // 包含头文件。
//using namespace std;        // 指定缺省的命名空间。
//
//
//class CGirl            // 超女类。
//{
//public:
//	int m_bh;              // 编号。
//	string m_name;   // 姓名。
//	int m_rank;          // 排名。
//	
//};
//
//template <typename T>
//void Swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
// 
////template<typename T> void Swap<CGirl>(CGirl& g1, CGirl& g2)
//template<> void Swap(CGirl& g1, CGirl& g2)
//{
//	int tmp = g1.m_rank;
//	g1.m_rank = g2.m_rank;
//	g2.m_rank = tmp;
//	cout << "调用了Swap(CGirl& g1, CGirl& g2)\n";
//}
//
//int main()
//{
//	int a = 10, b = 22;
//	Swap(a, b);		// 使用了模板函数
//	cout << "a=" << a << ",b=" << b << endl;
//	CGirl g1, g2;
//	g1.m_rank = 1; g2.m_rank = 2;
//	Swap(g1, g2);   // 使用了超女类的具体化函数
//	cout << "g1.m_rank=" << g1.m_rank << "\ng2.m_rank=" << g2.m_rank << endl;
//}
//
//
//





