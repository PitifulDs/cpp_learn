#include <iostream>
using namespace std;
//
//#define MAXLEN 10
//
//
//template<class T>
//class Vector
//{
//private:
//	int len;
//	T* items;
//public:
//	//Array() { memset(items, 0, sizeof(items)); } 字符串不能用memset
//	Vector(int size=100):len(size){
//		items = new T[len];
//	}
//	~Vector(){
//		delete[] items;
//		items = nullptr;
//	}
//
//	void resize(int size) {	//	扩展数组的内存空间
//		if (size <= len) return;
//		T* tmp = new T[size];
//		for (int ii = 0; ii < len; ii++) tmp[ii] = items[ii];	// 把原来数组中的元素复制到新数组
//		delete[] items;
//		items = tmp;
//		len = size;
//	}
//
//	int size() const { return len; }
//
//	T& operator[](int ii)	// 重载操作符[]，可以修改数组中的元素
//	{
//		if (ii >= len) resize(ii + 100);	//	扩展数组
//		return items[ii];
//	}
//
//	const T& operator[] (int ii) const	// 重载操作符[]，不可以修改数组中的元素
//	{
//		return items[ii];
//	}
//};
//
//
//
//
//
//int main()
//{
//	//Array<string> aa;
//	Vector<string> aa(1);
//	/*aa[0] = 333;
//	aa[1] = 3383;
//	aa[2] = 373;
//	aa[3] = 313;
//	aa[4] = 323;
//	-
//	aa[8] = 343;*/
//	aa[1] = "aedd";
//	aa[2] = "sqqd";
//	aa[3] = "dqdc";
//	aa[4] = "北京";
//
//
//
//	for (int ii = 0; ii < 10; ii++)
//	{
//		cout << "aa[" << ii << "]=" << aa[ii] << endl;
//	}
//
//
//
//
//
//
//	return 0;
//}