#include <iostream>
using namespace std;

//
//
//template<class T>
//class Vector
//{
//private:
//	int len;
//	T* items;
//	int top;
//public:
//	//Array() { memset(items, 0, sizeof(items)); } 字符串不能用memset
//	Vector(int size=2):len(size){
//		items = new T[len];
//	}
//	~Vector(){
//		delete[] items;
//		items = nullptr;
//	}
//
//	Vector& operator=(const Vector& v)	// 重载赋值运算符函数，实现深拷贝
//	{
//		delete[] items;
//		len = v.len;	//	栈的实际大小
//		items = new T[len];	//	重新分配数组
//		for (int ii = 0; ii < len; ii++) items[ii] = v.items[ii];	// 复制数组中的元素
//		top = v.top;
//		return *this;
//
//
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
//template<class DataType>
//class Stack {
//private:
//    DataType* items;
//    int stacksize;  // 修改：添加初始化列表，正确赋值给stacksize
//    int top;
//
//public:
//    Stack(int size=3) : stacksize(size), top(0) {  // 修改：添加初始化列表，正确赋值给stacksize
//        items = new DataType[stacksize];
//    }
//
//    ~Stack() {
//        delete[] items;  // 修改：删除数组时使用delete[]
//    }
//
//	Stack& operator=(const Stack& v)	// 重载赋值运算符函数，实现深拷贝
//	{
//		delete[] items;
//		stacksize = v.stacksize;	//	栈的实际大小
//		items = new DataType[stacksize];	//	重新分配数组
//		for (int ii = 0; ii < stacksize; ii++) items[ii] = v.items[ii];	// 复制数组中的元素
//		top = v.top;
//		return *this;
//
//
//	}
//
//
//    bool isempty() const {
//        return top == 0;
//    }
//
//    bool isfull() const {
//        return top == stacksize;
//    }
//
//    bool push(const DataType& item) {
//        if (top < stacksize) {
//            items[top++] = item;
//            return true;
//        }
//        return false;
//    }
//
//    bool pop(DataType& item) {
//        if (top > 0) {
//            item = items[--top];
//            return true;
//        }
//        return false;
//    }
//};
//
//
//
//int main()
//{
//	// Vector容器大小为2  Stack容器的大小缺省值为3.
//	// 创建Vector容器， 容器中的元素用Stack
//	Vector<Stack<string>> vs;
//
//
//	// 手工往容器中添加数据
//	vs[0].push("西施"); vs[0].push("锐安"); vs[0].push("北京");
//	vs[1].push("西施1"); vs[1].push("锐安1"); vs[1].push("北京1");
//
//
//	// 用嵌套的循环，把容器中的数据显示出来
//	for (int i = 0; i < vs.size(); i++)	// 遍历Vector容器
//	{
//		while (vs[i].isempty() == false)	// 便利Stack容器
//		{
//			string item;vs[i].pop(item);cout << "item=" << item << endl;
//
//		}
//	}
//
//	// 创建Stack容器，容器中的元素用Vector<string>
//	Stack<Vector<string>> sv;
//
//	Vector<string> tmp;
//	tmp[0] = "西施1"; tmp[1] = "西施2"; sv.push(tmp);
//	tmp[0] = "西施11"; tmp[1] = "西施22"; sv.push(tmp);
//	tmp[0] = "西施111"; tmp[1] = "西施222"; tmp[2] = "西施333"; tmp[3] = "西施444"; sv.push(tmp);
//
//	
//		while (sv.isempty() == false)	// 便利Stack容器
//		{
//			sv.pop(tmp);
//			for (int i = 0; i < vs.size(); i++)	// 遍历Vector容器
//			{
//				cout << "sv[" <<i<<"]="<<tmp[i] << endl;
//			}
//		}
//
//
//	return 0;
//}