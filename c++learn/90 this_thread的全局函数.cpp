#include<iostream>
#include<thread>
#include<windows.h>
using namespace std;

//
//// 普通函数
//void func(int bh, const string& str)
//{
//	cout <<"子线程：" << this_thread::get_id() << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//		Sleep(1000);
//	}
//
//}

//int main()
//{
//	// 勇普通函数创建线程
//	thread th1(func, 3, "我是一直杀杀鸟");
//	thread th2(func, 8, "我是一只小小鸟");
//
//	cout << "主线程:" << this_thread::get_id() << endl;
//	cout << "线程th1:" << th1.get_id() << endl;
//	cout << "线程th2:" << th2.get_id() << endl;
//	th1.swap(th2);
//	cout << "线程th1:" << th1.get_id() << endl;
//	cout << "线程th2:" << th2.get_id() << endl;
//
//	th1.join();
//	th2.join();
//
//}
//




