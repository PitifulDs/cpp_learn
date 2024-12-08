////#include <iostream>         // 包含头文件。
////using namespace std;        // 指定缺省的命名空间。
////
////class Stack
////{
////private:
////	int* items;
////	int stacksize;
////	int top;
////
////public:
////	// 沟站函数： 1.分配栈数组内存  2.把栈顶指针初始化为0
////	Stack(int size) : stacksize(), top(0) {
////		items = new int[stacksize];
////
////	}
////
////	~Stack() {
////		delete[] items;
////		//items = new int[stacksize];
////	}
////
////	bool isempty() const {
////		//if (top == 0) return true;
////		return top == 0;
////	}
////	bool isfull() const {
////		return top == stacksize;
////	}
////	bool push(const int& item) {
////		if (top < stacksize) { items[top++] = item; return true; }
////		return false;
////	}
////	bool pop(int& item) {
////		if (top > 0) { item = items[--top]; return true; }
////		return false;
////	}
////};
////
////
////
////int main()
////{
////	Stack ss(5);
////	ss.push(1);
////	ss.push(2);
////	ss.push(3);
////	ss.push(4);
////	ss.push(5);
////
////	int item;
////	while (ss.isempty() == false)
////	{
////		ss.pop(item);
////		cout << "item " << item << endl;
////	}
////
////	return 0;
////}
//
//
//#include <iostream>
//using namespace std;
//
////typedef int DataType;
//
//template<class DataType>
//class Stack {
//private:
//    DataType* items;
//    int stacksize;  // 修改：添加初始化列表，正确赋值给stacksize
//    int top;
//
//public:
//    Stack(int size) : stacksize(size), top(0) {  // 修改：添加初始化列表，正确赋值给stacksize
//        items = new DataType[stacksize];
//    }
//
//    ~Stack() {
//        delete[] items;  // 修改：删除数组时使用delete[]
//    }
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
//int main() {
//    Stack <string> ss(5);
//    ss.push("ruian");
//    ss.push("snbbb");
//    ss.push("beijiNgsow");
//    ss.push("uaiwus");
//    ss.push("oewoeeoeo");
//
//    string item;
//    while (ss.isempty() == false) {
//        ss.pop(item);
//        cout << "item " << item << endl;
//    }
//
//    return 0;
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
