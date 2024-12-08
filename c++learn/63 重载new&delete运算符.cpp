#include<iostream>
using namespace std;

//void* operator new(size_t size)  // 参数必须是size_t（unsigned long long），返回值必须是void*。
//{
//	cout << "调用了全局重载的new：" << size << "字节。\n";
//	void* ptr = malloc(size);        // 申请内存。
//	cout << "申请到的内存的地址是：" << ptr << endl;
//	return ptr;
//}
//
//void operator delete(void* ptr)   // 参数必须是void *，返回值必须是void。
//{
//	cout << "调用了全局重载的delete。\n";
//	if (ptr == 0) return;       // 对空指针delete是安全的。
//	free(ptr);      // 释放内存。
//}
//
//class CGirl       // 超女类CGirl。
//{
//public:
//	int        m_bh;               // 编号。
//	int        m_xw;               // 胸围。
//
//	CGirl(int bh, int xw) { m_bh = bh, m_xw = xw;  cout << "调用了构造函数CGirl()\n"; }
//	~CGirl() { cout << "调用了析构函数~CGirl()\n"; }
//	void* operator new(size_t size)   // 参数必须是size_t（unsigned long long），返回值必须是void*。
//	{
//		cout << "调用了类的重载的new：" << size << "字节。\n";
//		void* ptr = malloc(size);        // 申请内存。
//		cout << "申请到的内存的地址是：" << ptr << endl;
//		return ptr;
//	}
//
//	void operator delete(void* ptr)   // 参数必须是void *，返回值必须是void。
//	{
//		cout << "调用了类的重载的delete。\n";
//		if (ptr == 0) return;       // 对空指针delete是安全的。
//		free(ptr);      // 释放内存。
//	}
//};
//
//int main()
//{
//	/*int* p1 = new int(3);
//	cout << "p1=" << (void*)p1 << "，*p1=" << *p1 << endl;
//	delete p1;*/
//
//	CGirl* p2 = new CGirl(3, 8);
//	cout << "p2的地址是：" << p2 << "编号：" << p2->m_bh << "，胸围：" << p2->m_xw << endl;
//	delete p2;
//}
//
