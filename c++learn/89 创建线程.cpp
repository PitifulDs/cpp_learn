#include<iostream>
#include<thread>
#include<windows.h>
using namespace std;


//
//// 普通函数
//void func(int bh, const string& str)
//{
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//		Sleep(1000);
//	}
//
//}
//
//
//// 仿函数
//class mythread1
//{
//public:
//	void operator()(int bh, const string& str) {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//			Sleep(1000);
//		}
//	}
//};
//
//// 类中有静态成员函数
//class mythread2
//{
//public:
//	static void func(int bh, const string& str) {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//			Sleep(1000);
//		}
//	}
//};
//
//// 类中有普通成员函数
//class mythread3
//{
//public:
//	void func(int bh, const string& str) {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//			::Sleep(1000);
//		}
//	}
//};
//
//int main()
//{
//	// 用普通函数创建线程
//	/*thread th1(func, 3, "我是一只小小鸟");
//	thread th2(func, 8, "我是一只小鸟");*/
//	
//	// lamada函数创建进程
//	auto f = [](int bh, const string & str)
//	{
//
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//			Sleep(1000);
//		}
//
//	};
//	//thread th3(f, 3, "我是一只鸟");
//
//	// 用仿函数创建线程
//	//thread th4(mythread1(), 3, "我是鸟");
//
//	// 用类的静态成员函数创建线程
//	//thread th5(mythread2::func, 3, "我鸟");
//
//	// 用类得普通成员函数创建线程
//	mythread3 myth; // 必须先创建类的对象，必须保证对象的生命周期比子线程长；
//	thread th6(&mythread3::func, &myth, 3, "我是");
//
//	cout << "任务开始。\n";
//	for(int i = 0; i < 10; i++)
//	{
//		cout << "执行任务中\n";
//		Sleep(1000);
//	}
//
//	cout << "任务完成\n";
//	//th1.join();
//	//th2.join();
//	//th3.join();
//	//th4.join();
//	//th5.join();
//	th6.join();
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

