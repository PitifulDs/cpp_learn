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
//	//Array() { memset(items, 0, sizeof(items)); } �ַ���������memset
//	Vector(int size=2):len(size){
//		items = new T[len];
//	}
//	~Vector(){
//		delete[] items;
//		items = nullptr;
//	}
//
//	Vector& operator=(const Vector& v)	// ���ظ�ֵ�����������ʵ�����
//	{
//		delete[] items;
//		len = v.len;	//	ջ��ʵ�ʴ�С
//		items = new T[len];	//	���·�������
//		for (int ii = 0; ii < len; ii++) items[ii] = v.items[ii];	// ���������е�Ԫ��
//		top = v.top;
//		return *this;
//
//
//	}
//
//	void resize(int size) {	//	��չ������ڴ�ռ�
//		if (size <= len) return;
//		T* tmp = new T[size];
//		for (int ii = 0; ii < len; ii++) tmp[ii] = items[ii];	// ��ԭ�������е�Ԫ�ظ��Ƶ�������
//		delete[] items;
//		items = tmp;
//		len = size;
//	}
//
//	int size() const { return len; }
//
//	T& operator[](int ii)	// ���ز�����[]�������޸������е�Ԫ��
//	{
//		if (ii >= len) resize(ii + 100);	//	��չ����
//		return items[ii];
//	}
//
//	const T& operator[] (int ii) const	// ���ز�����[]���������޸������е�Ԫ��
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
//    int stacksize;  // �޸ģ���ӳ�ʼ���б���ȷ��ֵ��stacksize
//    int top;
//
//public:
//    Stack(int size=3) : stacksize(size), top(0) {  // �޸ģ���ӳ�ʼ���б���ȷ��ֵ��stacksize
//        items = new DataType[stacksize];
//    }
//
//    ~Stack() {
//        delete[] items;  // �޸ģ�ɾ������ʱʹ��delete[]
//    }
//
//	Stack& operator=(const Stack& v)	// ���ظ�ֵ�����������ʵ�����
//	{
//		delete[] items;
//		stacksize = v.stacksize;	//	ջ��ʵ�ʴ�С
//		items = new DataType[stacksize];	//	���·�������
//		for (int ii = 0; ii < stacksize; ii++) items[ii] = v.items[ii];	// ���������е�Ԫ��
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
//	// Vector������СΪ2  Stack�����Ĵ�СȱʡֵΪ3.
//	// ����Vector������ �����е�Ԫ����Stack
//	Vector<Stack<string>> vs;
//
//
//	// �ֹ����������������
//	vs[0].push("��ʩ"); vs[0].push("��"); vs[0].push("����");
//	vs[1].push("��ʩ1"); vs[1].push("��1"); vs[1].push("����1");
//
//
//	// ��Ƕ�׵�ѭ�����������е�������ʾ����
//	for (int i = 0; i < vs.size(); i++)	// ����Vector����
//	{
//		while (vs[i].isempty() == false)	// ����Stack����
//		{
//			string item;vs[i].pop(item);cout << "item=" << item << endl;
//
//		}
//	}
//
//	// ����Stack�����������е�Ԫ����Vector<string>
//	Stack<Vector<string>> sv;
//
//	Vector<string> tmp;
//	tmp[0] = "��ʩ1"; tmp[1] = "��ʩ2"; sv.push(tmp);
//	tmp[0] = "��ʩ11"; tmp[1] = "��ʩ22"; sv.push(tmp);
//	tmp[0] = "��ʩ111"; tmp[1] = "��ʩ222"; tmp[2] = "��ʩ333"; tmp[3] = "��ʩ444"; sv.push(tmp);
//
//	
//		while (sv.isempty() == false)	// ����Stack����
//		{
//			sv.pop(tmp);
//			for (int i = 0; i < vs.size(); i++)	// ����Vector����
//			{
//				cout << "sv[" <<i<<"]="<<tmp[i] << endl;
//			}
//		}
//
//
//	return 0;
//}