#include <iostream>         // 包含头文件。
using namespace std;        // 指定缺省的命名空间。

/*
void Swap(int &a, int &b)
{
	int tmp = a;
	b = a;
	b = tmp;
}

void Swap(double& a,  double& b)
{
	double tmp = a;
	b = a;
	b = tmp;
}


void Swap(string& a, string& b)
{
	string tmp = a;
	b = a;
	b = tmp;
}
*/

//template <typename T>
//void Swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <typename T1, typename T2>
//void show1(T1 no, T2 message)
//{
//
//	cout << "亲爱的" << no << "号：" << message << endl;
//
//
//}
//
//class CGirl
//{
//public:
//	template<typename T>
//	CGirl(T a)
//	{
//		cout << "a=" << a << endl;
//	}
//
//	template<typename T>
//	void show(T b)
//	{
//		cout << "b=" << b << endl;
//	}
//};
//
//int main()
//{
//	int a = 10, b = 30;
//	//Swap<int>(a, b);	// 手动指定，也可以让编译器自动推导。
//	Swap(a, b);
//	cout << "a=" << a << "\nb=" << b << "\n";
//
//	CGirl g("beijsinfh");
//	g.show(3);
//	g.show("xishi");
//
//	//short bh = 3;
//	//const char* message = "我是一直杀杀鸟";
//	int bh = 3;
//	string  message = "我是一直杀杀鸟";
//	show1(bh, message);
//}

















