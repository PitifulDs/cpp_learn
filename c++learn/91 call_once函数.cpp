//#include<iostream>
//#include<thread>
//#include<mutex> 
//using namespace std;
//
//once_flag onceflag;	// once_flag全局变量。本质是取值为0和1的锁
//
//// 在线程中，打算只调用一次的函数
//void once_func(const int bh, const string& str)
//{
//	cout << "once_func() bh= " << bh << ", str=" << str << endl;
//
//}
//
//
//// 普通函数
//void func(int bh, const string& str)
//{
//	call_once(onceflag, once_func, 0, "各位观众，我要开始表白了。");
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "第" << i << "次表白：亲爱的" << bh << "号，" << str << endl;
//		this_thread::sleep_for(chrono::seconds(1)); // 休眠一秒
//	}
//
//}
//
//int main()
//{
//	// 普通函数创建线程
//	thread th1(func, 3, "我是一直杀杀鸟");
//	thread th2(func, 8, "我是一只小小鸟");
//
//
//
//	th1.join();
//	th2.join();
//
//}
//
