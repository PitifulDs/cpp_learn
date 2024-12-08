////#include <iostream>         // ����ͷ�ļ���
////using namespace std;        // ָ��ȱʡ�������ռ䡣
////
////class Stack
////{
////private:
////	int* items;
////	int stacksize;
////	int top;
////
////public:
////	// ��վ������ 1.����ջ�����ڴ�  2.��ջ��ָ���ʼ��Ϊ0
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
//    int stacksize;  // �޸ģ���ӳ�ʼ���б���ȷ��ֵ��stacksize
//    int top;
//
//public:
//    Stack(int size) : stacksize(size), top(0) {  // �޸ģ���ӳ�ʼ���б���ȷ��ֵ��stacksize
//        items = new DataType[stacksize];
//    }
//
//    ~Stack() {
//        delete[] items;  // �޸ģ�ɾ������ʱʹ��delete[]
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
